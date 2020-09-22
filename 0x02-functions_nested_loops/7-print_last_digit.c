# include "holberton.h"

/**
* print_last_digit - Print the last digit of an integer
* @x: integer number
* Return: the last digit of a @x
*/

int print_last_digit(int x)
{
	x =  (x % 10);
	if (x < 0)
	{
		_putchar((x * -1) + '0');
		return (x * -1);
	}
	else
	{
		_putchar('0' + x);
		return (x);
	}
}
