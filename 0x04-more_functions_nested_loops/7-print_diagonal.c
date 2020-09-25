#include "holberton.h"

/**
* print_diagonal - Draws a diagonal line on the terminal.
* @n: Number of spaces an \.
* Return: \
*/

void print_diagonal(int n)
{
	short int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
				_putchar(92);
			if (i > 0)
			{
				for (j = 0; j < i; j++)
					_putchar(' ');
				_putchar(92);
			}

			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
