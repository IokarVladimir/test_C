#include <stdio.h>

int main()
{
	int n1, n2, i, gcd;

	printf("Введите два целых числа: ");
	scanf("%d %d", &n1, &n2);

	for (i = 1; i <=n1 && i<= n2; ++i)
	{
		//Проверяем, делятся ли на i оба числа без остатка
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}

	printf("НОД - %d\n", gcd);

	return 0;
}
