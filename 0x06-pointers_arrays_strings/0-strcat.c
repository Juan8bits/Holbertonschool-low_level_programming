#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: string concatenates
 * @src: string source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	short int i, j;

	i = 0, j = 0;
	while (dest[i] != '\0')
		i++;
    	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
