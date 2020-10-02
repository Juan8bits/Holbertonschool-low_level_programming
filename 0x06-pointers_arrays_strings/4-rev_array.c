#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: string
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	short int i, g, aux;

	g = 0;
	for (i = n - 1 ; i  >= (n / 2); ++g, i--)
	{
		aux = a[i];
		a[i] = a[g];
		a[g] = aux;
	}
}
