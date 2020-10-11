#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line
 * @argc: int number. Size of argv
 * @argv: Char. Parameter passed by termina
 * Return: 0.
 */

int main (int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
