#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main()
{
	int n, flag;

	printf("Введите положительное целое число: ");
	scanf("%d", &n);

	// Проверка на простое число
	flag = checkPrimeNumber(n);
	if (flag == 1)
		printf("%d - простое.\n", n);
	else 
		printf("%d - не является простым.\n", n);

	// проверка на число Армстронга
	flag = checkArmstrongNumber(n);
	if (flag == 1)
		printf("%d - число Армстронга.\n", n);
	else 
		printf("%d - не является числом Армстронга.\n", n);
	return 0;
}

int checkPrimeNumber(int n)
{
	int i, flag = 1;

	for (i = 2; i <= n/2; ++i)
	{
		// Условие для не простого числа
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int checkArmstrongNumber(int number)
{
	int originalNumber, remainder, result = 0, n = 0, flag;

	originalNumber = number;

	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++n;
	}

	originalNumber = number;

	while (originalNumber != 0)
	{
		remainder = originalNumber % 10;
		result += pow(remainder, n);
		originalNumber /= 10;
	}

	// Условие для числа Армстронга
	if (result == number)
		flag = 1;
	else
		flag = 0;

	return flag;
}
