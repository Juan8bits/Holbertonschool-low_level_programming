#include "holberton.h"

/**
* times_table - Shows the 9 table
*
* Return: 9 table.
*/

void times_table(void)
{
	short int i, j, unit, dec;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			unit = ((i * j) % 10);
			dec = ((i * j) / 10);

			if (dec == 0 && j != 0)
				_putchar(' ');
			else if (dec > 0 && j != 0)
				_putchar('0' + dec);
			_putchar('0' + unit);

			if (j == 9)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
