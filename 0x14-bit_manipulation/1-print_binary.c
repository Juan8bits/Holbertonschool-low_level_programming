#include "holberton.h"

/**
 * int_to_bin - Functiont that print binary given unsigned int.
 * @n: unsigned int given.
 */

void int_to_bin(unsigned long int n)
{
	if (n == 0)
		return;
	int_to_bin(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Number to represent in binary.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	int_to_bin(n);
}
