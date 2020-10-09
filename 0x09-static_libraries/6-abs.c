#include "holberton.h"

/**
* _abs - Computes the absolute value of an integer
* @x: integer number
* Return: Absolute value of a input @x
*/

int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
