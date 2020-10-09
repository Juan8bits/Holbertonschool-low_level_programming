# include "holberton.h"
/**
 * _strcpy - copy strings
 * @dest: destiny string
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	short int leng;

	while (src[leng] != '\0')
	{
		dest[leng] = src[leng];
		leng++;
	}
	dest[leng] = '\0';
	return (dest);
}
