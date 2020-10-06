#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string.
 * Return: x.
 */

int _strlen_recursion(char *s)
{
	int x;

	x = 0;
	if (*s != '\0')
	{
		x = _strlen_recursion(s + 1);
		x++;
	}
	return (x);
}
