#include <stdio.h>
#include <math.h>

float calculateSD(float data[]);

int main()
{
	int i;
	float data[10];

	printf("Введите 10 элементов: ");
	for (i = 0; i < 10; ++i)
		scanf("%f", &data[i]);

	printf("\nСреднеквадратическое отклонение = %.6f\n",
			calculateSD(data));


	return 0;
}


float calculateSD(float data[])
{
	float sum = 0.0, mean, standartDeviation = 0.0;

	int i;

	for (i = 0; i < 10; ++i)
	{
		sum += data[i];
	}

	mean = sum/10;

	for (i = 0; i < 10; ++i)
		standartDeviation += pow(data[i] - mean, 2);
	return sqrt(standartDeviation/10);
}
