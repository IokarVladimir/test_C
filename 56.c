#include <stdio.h>

int main()
{
	char s[1000];
	int i;

	printf("Введите строку: ");
	scanf("%s", s);
	
	for (i = 0; s[i] != '\0'; ++i);

	printf("Длина: %d\n", i);

	return 0;
}
