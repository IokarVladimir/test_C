#include <stdio.h>

int main()
{
	int n, i, flag = 0;

	printf("Введите целое положительное число: ");
	scanf ("%d", &n);

	for (i = 2; i <= n/2; ++i)
	{
		// condition for nonprime number
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf ("%d - простое\n", n);
	else
		printf ("%d - не является простым\n", n);

	return 0;
}
