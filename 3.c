#include <stdio.h>
int main()
{
	int firstNumber, secondNumber, sum;

	printf("Введите два целых числа: ");

	// Читаем 2 целых числа функцией scanf()
	scanf("%d %d", &firstNumber, &secondNumber);

	// вычисляем сумму двух чисел
	sum = firstNumber + secondNumber;

	// Отображаем сумму
	printf("%d + %d = %d\n", firstNumber, secondNumber, sum);

	return 0;
}
