#include <stdio.h>
#include <stdlib.h> /* Для функции exit() */

int main()
{
	char sentence[1000];
	FILE *fptr;

	fptr = fopen ("text.txt", "w");
	if (fptr == NULL)
	{
		printf ("Ошибка!");
		exit(1);
	}

	printf("Введите предложение:\n");
	gets(sentence);

	fprintf (fptr, "%s", sentence);

	fclose(fptr);

	return 0;
}
