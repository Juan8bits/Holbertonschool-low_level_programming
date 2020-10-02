#include "holberton.h"

/**
 * string_toupper - changes all lowercase to uppercase.
 * @m: input string
 * Return: uppercarse
 */

char *string_toupper(char *m)
{
	short int i;

	i = 0;
	while (m[i] != '\0')
	{
		if (m[i] >=  97 && m[i] <= 122)
			m[i] = m[i] - 32;
		i++;
	}
	return (m);
}
