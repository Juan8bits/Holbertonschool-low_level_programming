# include "holberton.h"

/**
* _islower - Show the lowercase character.
*
* @c: The input character
*
* Return: 1 if it´s true. 0 !=.
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
