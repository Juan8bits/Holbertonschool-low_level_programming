# include "holberton.h"

/**
 * _isupper - Show the uppercase character.
 *
 * @c: The input character
 *
 * Return: 1 if it´s true. 0 !=.
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
