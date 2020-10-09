# include "holberton.h"

/**
* _puts - print a string
* @str: String to print
*/

void _puts(char *str)
{
	int z;

	while (str[z] != '\0')
	{
		_putchar(str[z]);
		z++;
	}
	_putchar(10);
}
