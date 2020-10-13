#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Function that create array of chars, and initializes it
 * with a specific char using Malloc.
 * @size: Size of array.
 * @c: specific char to initializes.
 * Return: if size == 0, return NULL. Else, pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size);
	if (size == 0 || p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
