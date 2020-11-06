#include "holberton.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: Pointer to unsigned long int.
 * @index: Bit to set to 0
 * Return: 1 if it worked or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy;

	if (index >= sizeof(int) * sizeof(long))
		return (-1);
	copy = ~(1 << index);
	*n = *n & copy;
	return (1);
}
