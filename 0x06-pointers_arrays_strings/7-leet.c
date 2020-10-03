#include "holberton.h"

/**
 * leet - encode string into 1337
 * @s: string
 * Return: s.
 */

char *leet(char *s)
{
	int i, j;
	char encode[]= "aeotl43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == encode[j] || s[i] == encode[j - 32])
			{
				s[i] = encode[j + 5];
				break;
			}
		}
	}
	return (s);
}
