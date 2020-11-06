#include "holberton.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Integer number given.
 * @index: Indicator of the bit to return
 * Return: Bit or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < (sizeof(int) * sizeof(long)))
		return ((n >> index) & 1);
	return (-1);
}
