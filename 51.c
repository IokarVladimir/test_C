#include <stdio.h>
void cyclicSwap (int *a, int *b, int *c);

int main()
{
	int a, b, c;

	printf("Введите a, b и c: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("До замены:\n");
	printf("a = %d \nb = %d \nc = %d\n", a, b, c);

	cyclicSwap (&a, &b, &c);

	printf("После:\n");
	printf("a = %d \nb = %d \nc = %d\n", a, b, c);

	return 0;
}

void cyclicSwap (int *a, int *b, int *c)
{
	int temp;

	// меняем местами переменные
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}
