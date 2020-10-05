#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: pointer of s
 * @b: constant
 * @n: bytes to fills
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
