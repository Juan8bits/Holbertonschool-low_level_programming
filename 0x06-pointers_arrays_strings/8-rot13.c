#include "holberton.h"

/**
 * rot13 - function that encode string to rot13
 * @a: string
 * Return: encode str
 */

char *rot13(char *a)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != 0; i++)
	{
		for (j = 0; alpha[j] != 0; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = rot[j];
				break;
			}
		}
	}
	return (a);
}
