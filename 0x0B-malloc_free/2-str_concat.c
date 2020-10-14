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

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i1 = 0; s1[i1] != 0; i1++)
		;
	for (i2 = 0; s2[i2] != 0; i2++)
		;
	conc = malloc(i1 + i2);

	if (conc == NULL)
		return (NULL);

	for (j = 0; j < (i1 + i2); j++)
	{
		if (j < i1)
			conc[j] = s1[j];
		if (j >= i1)
			conc[j] = s2[j - i1];
	}
	return (conc);
}
