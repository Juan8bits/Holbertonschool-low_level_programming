# include "holberton.h"

/**
* print_line - Draw a straight line in the terminal
* @n: Number of straight
* Return: N straight in the terminal.
*/

void print_line(int n)
{
	short int w;

	if (n > 0)
	{
		for (w = 0; w < n; w++)
			_putchar(95);
	}
	_putchar(10);
}
