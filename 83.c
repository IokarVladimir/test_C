#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// наша структура
struct node {
	char *str;
};

// функция сравнения для qsort
static int cmpr(const void *a, const void *b);

int main(void) {
	struct node **strarray = NULL;
	int i = 0, count = 0;
	char line[1024];

	while (fgets(line, 1024, stdin) != NULL) {
		// добавляем 1 элемент в массив
		strarray = (struct node **)realloc(strarray, (count + 1) * sizeof(struct node *));

		// выделяем память для одной структуры 'struct node'
		strarray[count] = (struct node *)malloc(sizeof(struct node));

		// копируем данные в новый элемент (структуру)
		strarray[count]->str = strdup(line);
		count++;
	}

	// до сортировки ...
	printf("До:\n");
	for (i = 0; i < count; i++) {
		printf("[%d]->str: %s", i, strarray[i]->str);
	}

	// передаем массив структур
	qsort(strarray, count, sizeof(*strarray), cmpr);

	// результат
	printf("\n--\nПосле:\n");
	for (i = 0; i < count; i++) {
		printf("[%d]->str: %s", i, strarray[i]->str);
	}

	printf("\n");

	// освобождаем память
	for (i = 0; i < count; i++) {
		free(strarray[i]->str);
		free(strarray[i]);
		i++;
	}
	free(strarray);

	return 0;
}

// функция сравнения для qsort
static int cmpr(const void *a, const void *b) {
	struct node * const *one = a;
	struct node * const *two = b;

	return strcmp((*one)->str, (*two)->str);
}
