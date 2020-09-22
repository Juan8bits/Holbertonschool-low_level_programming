#include "holberton.h"

/**
* jack_bauer - 24 hours clock
*
* Return: 24 hours, second per second.
*/

void jack_bauer(void)
{
	short int hora_d, hora_u, min_d, min_u;

	for (hora_d = 0; hora_d < 3; hora_d++)
	{
		for (hora_u = 0; hora_u < 10; hora_u++)
		{
			if (hora_d == 2 && hora_u == 4)
				break;
			for (min_d = 0; min_d < 6; min_d++)
			{
				for (min_u = 0; min_u < 10; min_u++)
				{
					_putchar('0' + hora_d);
					_putchar('0' + hora_u);
					_putchar(':');
					_putchar('0' + min_d);
					_putchar('0' + min_u);
					_putchar('\n');
				}
			}
		}
	}
}
