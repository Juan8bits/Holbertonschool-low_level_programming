#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: string
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	short int i, g, aux;

	i = 0;
	for (g = n - 1 ; g  >= (n / 2); ++i, g--)
	{
		aux = a[i];
		a[i] = a[g];
		a[g] = aux;
	}
}
