#include <stdio.h>

int main()
{
	long long n;
	int count = 0;

	printf("Введите целое число: ");
	scanf ("%lld", &n);

	while (n != 0)
	{
		// n = n/10
		n /= 10;
		++count;
	}

	printf ("Количество цифр:  %d\n", count);

	return 0;
}
