#include <stdio.h>

int checkPrime(int n);
int main()
{
	int n, i, flag = 0;

	printf("Введите целое положительное число: ");
	scanf("%d", &n);

	for (i = 2; i <= n/2; ++i)
	{
		// проверяем, является ли i простым
		if (checkPrime(i) == 1)
		{
			// является ли n - i простым
			if (checkPrime(n - i) == 1)
			{
				// n= primeNumber1 + primeNumber2
				printf("%d = %d + %d\n", n, i, n-i);
				flag = 1;
			}
		}
	}

	if (flag == 0)
		printf("%d не может быть выражено как сумма простых чисел.", n);

	printf("\n");

	return 0;
}

// Function to check prime number

int checkPrime(int n)
{
	int i, isPrime = 1;

	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}
