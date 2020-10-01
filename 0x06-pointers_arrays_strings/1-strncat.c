#include "holberton.h"

/**
 * _strncat - Function that concatenates n characters of string to other string.
 * @dest: destiny string
 * @src: source string
 * @n: number of characters
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	short int i, j;

	i = 0, j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j == n)
			break;
		dest[i] = src[j];
		i++;
		j++;
	}
	return(dest);
}
