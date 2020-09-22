# include "holberton.h"

/**
* print_sign - Prints the sign of a number
*
* @n: The number to check in the program
*
* Return: 1,0 or -1 dependig the input of @n
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(43);
		return (1);
	}
}
