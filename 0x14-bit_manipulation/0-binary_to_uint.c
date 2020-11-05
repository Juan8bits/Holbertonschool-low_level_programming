#include "holberton.h"

/**
 * binary_to_uint - Function that converts binary number to an unsigned int.
 * @b: Pointer to a string of a 0 and 1 chars.
 * Return: Converted number or 0 if
 * b have a diferent string to 1 or 0, b is null.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int out = 0, len;

	if (b)
	{
		for (len = 0; b[len]; len++)
		{
			if (b[len] == '1')
			{
				out = out << 1;
				out = out | 1;
			}
			else if (b[len] == '0')
				out = out << 1;
			else
				return (0);
		}
		return (out);
	}
	return (0);
}
