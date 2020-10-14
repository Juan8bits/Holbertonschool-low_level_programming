#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 * Return: s1 contents followd by s2 contents, Null on failure.
 */

char *str_concat(char *s1, char *s2)
{
	short int i1, i2, j;
	char *conc = NULL;

	i2 = 0, i1 = 0;
	if (s1 != NULL)
	{
		for (i1 = 0; s1[i1] != 0; i1++)
			;
	}
	if (s2 != NULL)
	{
		for (i2 = 0; s2[i2] != 0; i2++)
			;
	}

	conc = malloc(sizeof(char) * (i1 + i2 + 1));

	if (conc == NULL)
		return (NULL);

	for (j = 0; j < (i1 + i2); j++)
	{
		if (j < i1)
			conc[j] = s1[j];
		if (j >= i1)
			conc[j] = s2[j - i1];
	}
	conc[j] = '\0';
	return (conc);
}
