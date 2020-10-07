#include "holberton.h"

/**
 * _sqrt_recursion - functiont that returns the natural square root of a number
 * @n: natural number
 * Return: if n doesnt natural (-1), else natural square value.
 */
int _sqrt_recursion(int n)
{
	int x;

	x = 0;
	return (rev(n, x));
}

/**
 * rev - Functión that find a square of natural number
 * @n: natural number
 * @x: square root
 * Return:  if n doesnt natural (-1), else natural square value.
 */

int rev(int n, int x)
{
	if ((x * x) < n)
	{
		x = rev(n, x + 1);
	}
	if ((x * x) > n)
		return(-1);
	return (x);
}
