# include "holberton.h"

/**
* more_numbers - Print 10 times the numbers from 0 to 14
*
* Return: Numbers from 0 to 9. X10.
*/

void more_numbers(void)
{
	short int times, uni, i;

	for (times = 0; times <= 10; times++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 9)
			{
				uni = i;
			}
			if (i > 9)
			{
				uni = i % 10;
				_putchar('1');
			}
			_putchar(uni + '0');
		}
		_putchar(10);
	}

}
