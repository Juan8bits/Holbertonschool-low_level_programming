# include "holberton.h"

/**
* _strlen - Return the length of a string
* @s: string.
* Return: z
*/

int _strlen(char *s)
{
	int z;

	while (s[z] != '\0')
		z++;
	return (z);
}
