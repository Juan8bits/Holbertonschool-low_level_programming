#include "holberton.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: string
 * @accept: return value
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	short int i, j, x;

	i = 0, x = 0;
	while (s[i] != '\0' && x == 0)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x = 1;
				break;
			}
		}
		if (x == 1)
			break;
		i++;
	}
	if (x == 0)
		return ('\0');
	else
		return (s + i);
}
