#include "holberton.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: adress memory of string
 * @needle: adress memory of a needle
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0, j = 0;
	while (haystack[i] != '\0')
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return(0);
}
