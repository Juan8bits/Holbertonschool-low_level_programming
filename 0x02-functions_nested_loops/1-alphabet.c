# include "holberton.h"

/**
* print_alphabet - First Prorotype/Function
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter < 123; ++letter)
	{
		_putchar(letter);
	}
	_putchar(10);
}
