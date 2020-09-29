#include "holberton.h"

/**
* print_rev - print a string in reverse.
* @s: string
*/

void print_rev(char *s)
{
	short int z;

	while (s[z] != '\0')
		z++;
	for (z = z - 1; z >= 0; z--)
		_putchar(s[z]);
	_putchar(10);
}
