#include <stdio.h>

struct student
{
	char name[50];
	int roll;
	double group;
} s;

int main()
{
	printf("Введите информацию:\n");

	printf("Имя: ");
	scanf("%s", s.name);

	printf("Номер билета: ");
	scanf("%d", &s.roll);
	
	printf("Номер группы: ");
	scanf("%lf", &s.group);

	printf("Выводим информацию:\n");

	printf("Имя: ");
	puts(s.name);

	printf("Номер билета: %d\n", s.roll);

	printf("Номер группы: %lf\n", s.group);

	return 0;
}
