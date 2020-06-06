#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c[1000];
	FILE *fptr;

	if ((fptr = fopen("text.txt", "r")) == NULL)
	{
		printf("Ошибка при открытии файла");
		// Код возврата 1 - произошла ошибка.
		exit(1);
	}

	//  Читаем до исмвола \n
	fscanf(fptr, "%[^\n]", c);

	printf("Прочитано из файла:\n%s", c);
	fclose(fptr);

	return 0;
}
