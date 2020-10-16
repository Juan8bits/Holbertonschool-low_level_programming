#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 * @min: Min number
 * @max: Max number
 * Return: Min > Max -> Null, Malloc fails -> Null, Pointer to new array
 */

int *array_range(int min, int max)
{
	int *p = NULL;
	short int i, j;

	i = 0;
	if (min > max)
		return (NULL);
	i = max - min;

	p = malloc(sizeof(int) * (i + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	for (j = min; j <= max; j++, i++)
		p[i] = j;
	return (p);
}
