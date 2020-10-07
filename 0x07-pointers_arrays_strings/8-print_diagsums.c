#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - functiont that prints sum of the two diagonals (multidimensional array)
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int one;
	int result;

	result = 0;
	for (one = 0; one < size; one++)
		result += *(a + (size + 1) * one);
	printf("%d, ", result);
	result = 0;
	for (one = 1; one <= size; one++)
		result += *(a + (size - 1) * one);
	printf("%d\n", result);
}
