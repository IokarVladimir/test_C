#include <stdio.h>
int main()
{
	int dividend, divisor, quotient, remainder;

	printf("Введите делимое: ");
	scanf("%d", &dividend);

	printf("Введите делитель: ");
	scanf("%d", &divisor);

	// Computes quotient
	quotient = dividend / divisor;

	// Computes remainder
	remainder = dividend % divisor;

	printf("Частное = %d\n", quotient);
	printf("Остаток = %d\n", remainder);
	
	
	return 0;
}
