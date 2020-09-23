# include "holberton.h"
# include <stdio.h>

/**
* print_to_98 - Print all natural numbers from n to 98.
* @n: integer number input.
* Return: numbers from n to 98.
*/

void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d", n);
		if (n == 98)
		{
			_putchar('\n');
			break;
		}
		printf(", ");
	}
	for (; n > 98; n--)
	{
		printf("%d", n);
		if (n == 98)
		{
			_putchar('\n');
			break;
		}
		printf(", ");
	}
	printf("%d\n", n);
}
