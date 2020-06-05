#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, num;
	float *data;

	printf("Введите количество элементов: ");
	scanf("%d", &num);

	// Выделяем память под 'num' элементов
	data = (float*) calloc(num, sizeof(float));

	if (data == NULL)
	{
		printf("Ошибка выделения памяти\n.");
		exit(1);
	}

	printf("\n");

	// Вводим элементы
	for (i = 0; i < num; ++i)
	{
		printf("Введите элемнт %d: ", i+1);
		scanf("%f", data + i);
	}

	// Ищем максимальный элемент
	for (i = 1; i < num; ++i)
	{
		// Сохраняем максимальный элемент
		if (*data < *(data + i))
				*data = *(data + i);
	}

	printf("Максимум = %.2f\n", *data);

	return 0;
}
