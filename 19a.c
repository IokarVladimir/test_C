#include <stdio.h>

int main()
{
	int n, i;

	printf("Введите число: ");
	scanf("%d", &n);

	for(i = 1; i <=10; ++i)
	{
		printf("%d\t*\t%d\t=\t%d\n", n, i, n*i);
	}
	return 0;
}
