#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocated memory
 * @b:syze of memory to allocated.
 * Return: Pointer to allocated memory. If fails, return 98.
 */

void *malloc_checked(unsigned int b)
{
	int *point;

	point = malloc(b);
	if (point == NULL)
		exit(98);
	return (point);
}
