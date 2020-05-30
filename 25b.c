#include <stdio.h>
#include <math.h>

int main ()
{
	int base, exponent;
	long long result = 1;

	printf ("Введите число: ");
	scanf ("%d", &base);

	printf ("Введите степень: ");
	scanf ("%d", &exponent);

	result = pow (base, exponent);

	printf ("Результат = %lld\n", result);

	return 0;
}
