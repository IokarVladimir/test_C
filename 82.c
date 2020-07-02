#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortstrarr(void *array, unsigned n);
static int cmpr(const void *a, const void *b);

int main(void) {
	char line[1024];
	char *line_array[1024];

	int i = 0;
	int j = 0;

	// читаем данные со стандартного ввода
	while ((fgets(line, 1024, stdin)) != NULL)
		if (i < 1024)
			line_array[i++] = strdup(line);
		else
			break;

	// сортируем массив
	sortstrarr(line_array, i);

	// выводим результат
	while (j < i)
		printf("%s", line_array[j++]);

	return 0;
}

// Наша пользовательская функция сравнения 
// Мы просто сделали "обертку" для strcmp
static int cmpr(const void *a, const void *b) {
	return strcmp(*(char **)a, *(char **)b);
}

void sortstrarr(void *array, unsigned n) {
	// вызываем функцию qsort и передаем ей все необходимое
	qsort(array, n, sizeof(char *), cmpr);
}
