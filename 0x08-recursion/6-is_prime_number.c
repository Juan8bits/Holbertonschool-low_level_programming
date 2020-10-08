#include "holberton.h"

/**
 * is_prime_number - Funtiont that check if the number is prime
 * @n: number to check.
 * Return: 1 if it´s prime else 0.
 */
int is_prime_number(int n)
{
	int x;

	x = 2;
	return (rev_is_prime(n, x));
}

/**
 * rev_is_prime -Increase x counter
 * @n: number to check.
 * @x: number to div.
 * Return: x.
 */
int rev_is_prime(int n, int x)
{
	if ((n % x == 0 && x < n) || n < 2)
	{
		return (0);
	}
	else if (n % x == 0 && x == n)
		return (1);
	else
		return (rev_is_prime(n, x + 1));
}
