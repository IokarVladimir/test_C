#include <stdio.h>
int main()
{
	double firstNumber, secondNumber, product;
	printf("Введите два числа: ");

	// Читаем 2 вещественных числа функцией scanf()
	scanf("%lf %lf", &firstNumber, &secondNumber);

	// Результат умножения сохраняем в переменную product
	product = firstNumber * secondNumber;

	// Выводим результат, после запятой 2 знака, формат %.2lf
	printf("Product = %.2lf\n", product);

	return 0;
}
