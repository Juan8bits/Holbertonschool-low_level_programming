#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as parameter.
 * @str: string given.
 * Return: copy of string in other memory allocated.
 */
char *_strdup(char *str)
{
	int len, i;
	char *cp = NULL;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;

	cp = malloc(len + 1);

	if (cp == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		cp[i] = str[i];
	}
	return (cp);
}
