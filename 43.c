#include <stdio.h>

int main()
{
	int n, i;
	float num[100], sum = 0.0, average;

	printf("Введите количество элементов: ");
	scanf("%d", &n);

	while (n > 100 || n <= 0)
	{
		printf("Количество должно быть в пределах от 1 до 100.\n");
		printf("Введите количество элементов еще раз: ");
		scanf("%d", &n);
	}

	// Заполняем массив и паралельно подсчитываем среднее арифметическое
	for (i = 0; i < n; ++i)
	{
		printf("%d. Введите число: ", i+1);
		scanf("%f", &num[i]);
		sum += num[i];
	}

	average = sum / n;
	printf("Среднее = %.2f\n", average);

	return 0;
}
