#include <stdio.h>

struct Distance
{
	int feet;
	float m;
} d1, d2, sumOfDistances;

int main()
{
	printf("Заполняем первую структуру\n");
	printf("Количество шагов: ");
	scanf("%d", &d1.feet);
	printf("Количество метров: ");
	scanf("%f", &d1.m);
	printf("Заполняем вторую структуру");
	printf("Количество шагов: ");
	scanf("%d", &d2.feet);
	printf("Количество метров: ");
	scanf("%f", &d2.m);

	sumOfDistances.feet = d1.feet + d2.feet;
	sumOfDistances.m = d1.m + d2.m;

	printf("\nРезультат = %d - %.1f", sumOfDistances.feet, 
			sumOfDistances.m);

	return 0;
}
