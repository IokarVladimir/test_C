#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 10; i++){
		for (j = 1; j <= 9; j++)
			printf("%2d\t", i*j);
		printf("\n");
	}
	return 0;
}
