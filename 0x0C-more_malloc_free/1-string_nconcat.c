#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concat two strings up to n characters
 * @s1: string 1.
 * @s2: string 2.
 * @n: Number of characters to concat of string 2
 * Return: If function fails Null, else pointer to space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned short int i, len1, len2;

	i = 0, len1 = 0, len2 = 0;
	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != 0; len1++)
			;
	}
	if (s2 != NULL)
	{
		for (len2 = 0; s1[len2] != 0; len2++)
			;
	}
	if (n < len2)
		len2 = n;

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (len1 + len2 + 1); i++)
	{
		if (i < len1)
			p[i] = s1[i];
		if (i >= len1)
			p[i] = s2[i - len1];
	}
	p[i] = '\0';
	return (p);
}
