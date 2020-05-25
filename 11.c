#include <stdio.h>
int main()
{
	char c;
	int isLowercaseVowel, isUppercaseVowel;

	printf("Введите символ: ");
	scanf("%c", &c);

	// возвращает 1 (true), если с - гласный (нижний регистр)
	isLowercaseVowel = (c == 'a'||c == 'e'||c == 'y'||c == 'u'||
						c == 'j'||c == 'i'||c == 'o');
	
	// возвращает 1 (true), если с - гласный (верхний регистр)
	isUppercaseVowel = (c == 'A'||c == 'E'||c == 'Y'||c == 'U'||
						c == 'J'||c == 'I'||c == 'O');
	
	// возвращает 1 (true), если true одна из переменных - 
	// isLowercaseVowel или isUppercaseVowel
	
	if (isLowercaseVowel || isUppercaseVowel){
		printf("Введенный символ - гласный\n");
	} else {
		printf("Введенный символ - согласный\n");
	}
	return 0;
}
