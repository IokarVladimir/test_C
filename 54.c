#include <stdio.h>

int main()
{
	char line[150];
	int i, total, digits, spaces;

	printf("Введите строку ");
	scanf("%[^\n]", line);

	for (i = 0; line[i] != '\0'; ++i)
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			++digits;
		}
		else if (line[i] == ' ')
		{
			++spaces;
		}
		++total;
	}

	printf("Всего символов: %d", total);
	printf("\nЦифр: %d", digits);
	printf("\nПробелов: %d", spaces);

	return 0;
}
