#include <stdio.h>

int main()
{
	char operator;
	double firstNumber, secondNumber;

	printf ("Введите оператор (+, -, *, /): ");
	scanf ("%c", &operator);
	
	printf ("Введите два операнда: ");
	scanf ("%lf %lf", &firstNumber, &secondNumber);

	switch (operator)
	{
		case '+':
			printf ("%.1lf + %.1lf = %.1lf", firstNumber, 
					secondNumber, firstNumber + secondNumber);
			break;
		case '-':
			printf ("%.1lf - %.1lf = %.1lf", firstNumber, 
					secondNumber, firstNumber - secondNumber);
			break;
		case '*':
			printf ("%.1lf * %.1lf = %.1lf", firstNumber, 
					secondNumber, firstNumber * secondNumber);
			break;
		case '/':
			if (secondNumber != 0)
				printf ("%.1lf / %.1lf = %.1lf", firstNumber, 
					secondNumber, firstNumber / secondNumber);
			else printf ("на ноль делить нельзя!");
			break;
			
			//оператор неизвестен (+, -, *, /)
		default:
			printf ("Ошибка! Неправильный оператор");
	}

	printf ("\n");

	return 0;
}
