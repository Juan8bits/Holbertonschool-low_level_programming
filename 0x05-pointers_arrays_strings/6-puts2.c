# include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: Input strig of a characters
 */

void puts2(char *str)
{
	int leng, i;

	while (str[leng] != '\0')
		leng++;
	for (i = 0; i < leng; i = i + 2)
		_putchar(i + '0');
	_putchar(10);
}
