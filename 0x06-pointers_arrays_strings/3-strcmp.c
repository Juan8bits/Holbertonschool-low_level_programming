#include "holberton.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: string 1.
 * @s2: string 2.
 * Return: rest
 */

int _strcmp(char *s1, char *s2)
{
	short int i, rest;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		rest = s1[i] - s2[i];
		if (rest != 0)
			break;
		i++;
	}
	return (rest);
}
