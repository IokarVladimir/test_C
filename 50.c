#include <stdio.h>

int main()
{
	int data[5], i;
	printf("Введите 5 элементов: ");

	for (i = 0; i < 5; ++i)
		scanf("%d", data + i);

	printf("Содержимое массива: \n");
	for (i = 0; i < 5; ++i)
		printf("%d\n", *(data + i));

	return 0;
}
