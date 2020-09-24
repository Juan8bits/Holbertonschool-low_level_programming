#include "holberton.h"

/**
* print_times_table - Shows the n table
* @n: table.
* Return: n table.
*/

void print_times_table(int n)
{
	short int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i < (n + 1); i++)
		{
			for (j = 0; j < (n + 1); j++)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if ((i * j) < 100 && (i * j) >= 10)
					{
						_putchar(' ');
						_putchar((i * j) / 10 + '0');
						_putchar((i * j) % 10 + '0');
					}
					else if ((i * j) < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((i * j) + '0');
					}
					else
					{
						_putchar((i * j) / 100 + '0');
						_putchar(((i * j) / 10) % 10 + '0');
						_putchar((i * j) % 10 + '0');
					}
				}
				else
				{
					_putchar((i * j) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
