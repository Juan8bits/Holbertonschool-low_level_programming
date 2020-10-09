#include "holberton.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: string to locates a character
 * @c: character to locates
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
