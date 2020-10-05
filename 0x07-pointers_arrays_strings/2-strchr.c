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

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = &s[i];
			break;
		}
		if (s[i + 1] == '\0')
			s = 0;
		i++;
	}
	return (s);
}
