#include "holberton.h"

/**
* swap_int - sawp the value of two integers
* @a: Integer one.
* @b: Integer two.
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
