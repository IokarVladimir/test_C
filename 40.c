#include <stdio.h>
#include <math.h>

int convertDecimalToOctal(int decimalNumber);
long long convertOctalToDecimal(int octalNumber);

int main()
{
	int decimalNumber;
	int octalNumber;

	printf("Введите десятичное число: ");
	scanf("%d", &decimalNumber);

	printf("%d (десятичное) = %d (восьмеричное)\n",
			decimalNumber, convertDecimalToOctal(decimalNumber));

	printf("Введите восьмеричное число: ");
	scanf("%d", &octalNumber);

	printf("%d (восьмеричное) = %lld (десятичное)\n",
			octalNumber, convertOctalToDecimal(octalNumber));


	return 0;
}

int convertDecimalToOctal(int decimalNumber)
{
	int octalNumber = 0, i = 1;

	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8)*i;
		decimalNumber /= 8;
		i *= 10;
	}
	return octalNumber;
}

long long convertOctalToDecimal(int octalNumber)
{
	int decimalNumber = 0, i = 0;

	while (octalNumber != 0)
	{
		decimalNumber += (octalNumber % 10) * pow(8, i);
		++i;
		octalNumber /=10;
	}
	i = 1;

	return decimalNumber;
}

