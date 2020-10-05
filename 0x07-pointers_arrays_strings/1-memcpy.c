#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: adress memory of char dest
 * @src: adress memory of source char
 * @n: number of bytes to copy.
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
