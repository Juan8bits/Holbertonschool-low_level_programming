#include <stdio.h>
#include "holberton.h"
/**
 * print_array - print n characters od array
 * @a: string
 * @n: number of characters
 */

void print_array(int *a, int n)
{
	short int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
