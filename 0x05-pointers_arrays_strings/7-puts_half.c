# include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	short int leng, caracteres;

	while (str[leng] != '\0')
		leng++;
	if (leng % 2 == 0)
		caracteres = leng / 2;
	else
		caracteres = (leng -1) / 2;
	for(; caracteres < leng; caracteres++)
		_putchar(str[caracteres]);
	_putchar(10);
}
