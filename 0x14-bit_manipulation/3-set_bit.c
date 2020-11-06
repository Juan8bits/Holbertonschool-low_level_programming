#include "holberton.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @n: Pointer to unsigned long int.
 * @index: bit to set.
 * Return: 1 if it worked or -1 it an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy;

	if (index >= sizeof(int) * sizeof(long))
		return (-1);

	copy = 1 << index;
	*n = *n | copy;
	return (1);
}
