#include "holberton.h"

/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: Unsigned long int 1.
 * @m: Unsigned long int 2.
 * Return: Number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int copy;
	unsigned int count = 0;

	copy = n ^ m;

	while (copy)
	{
		count += copy & 1;
		copy >>= 1;
	}
	return (count);
}
