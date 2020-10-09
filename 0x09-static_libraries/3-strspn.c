#include "holberton.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: string
 * @accept: return value
 * Return: leng
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int leng;
	int i, j;

	i = 0, leng = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				leng++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (leng);
		i++;
	}
	return (leng);
}
