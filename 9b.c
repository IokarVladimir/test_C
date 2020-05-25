#include <stdio.h>

int main()
{
	double A, B, temp;

	printf("Введите А: ");
	scanf("%lf", &A);

	printf("Введите B: ");
	scanf("%lf", &B);

	A = A - B;
	B = A + B;
	A = B - A;

     
	printf("\nПосле замены, А = %.2lf", A);
	printf("\nПосле замены, В = %.2lf\n", B);

	return 0;
}
