#include <stdio.h>
#include <stdlib.h>

struct course
{
	int marks;
	char subject[30];
};

int main()
{
	struct course *ptr;
	int i, noOfRecords;
	printf("Количество записей: ");
	scanf("%d", &noOfRecords);

	// Выделяем память, ptr будем указывать на базовый адрес
	ptr = (struct course*) malloc (noOfRecords * sizeof(struct course));

	for (i = 0; i < noOfRecords; ++i)
	{
		printf("Введите название предмета и оценку:\n");
		scanf("%s %d", (ptr + i)->subject, (ptr + i)->marks);

	}

	printf("Результат:\n");

	for (i = 0; i < noOfRecords; ++i)
		printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);

	return 0;
}
