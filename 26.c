#include <stdio.h>

int main()
{
	int n, reversedInteger = 0, remainder, originalInteger;

	printf("Введите целое число: ");
	scanf("%d", &n);

	originalInteger = n;

	// Вычисляем обратное число
	while (n != 0)
	{
		remainder = n%10;
		reversedInteger = reversedInteger * 10 + remainder;
		n /= 10;
	}

	// полиндром, если исходное число и обратное одинаковые
	if (originalInteger == reversedInteger)
		printf("%d - полиндром\n", originalInteger);
	else
		printf("%d - не полиндром\n", originalInteger);

	return 0;
}
