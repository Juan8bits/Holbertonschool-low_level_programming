#include "holberton.h"
/**
 * _pow_recursion - Function that returns the value of x raise to
 * the porqer of y.
 * @x: base number
 * @y: exponent number
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int result;

	result = 1;
	if (y < 0)
		return (-1);
	if (y != 0)
	{
		result = _pow_recursion(x, (y - 1));
		result *= x;
	}
	return (result);
}
