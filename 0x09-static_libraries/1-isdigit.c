# include "holberton.h"

/**
* _isdigit - Checks for a digit
* @c: input digit
* Return: 1 if c is a digit. 0 otherwise.
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
