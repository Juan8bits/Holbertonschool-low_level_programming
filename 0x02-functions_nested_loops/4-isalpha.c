# include "holberton.h"

/**
* _isalpha - Show the lowercase character.
*
* @c: The input character
*
* Return: 1 if c is a letter, lowercase o uppercase.
* On error, 0 is returned,
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
