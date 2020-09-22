# include "holberton.h"

/**
* print_alphabet_x10 - First Prorotype/Function
*/

void print_alphabet_x10(void)
{
	short int letter, j;

	for (j = 0; j < 10; j++)
	{
		for (letter = 97; letter < 123; ++letter)
		{
			_putchar(letter);
		}
		_putchar(10);
	}
}
