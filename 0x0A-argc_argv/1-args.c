# include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: int number. Size of vector argv
 * @argv: char. String or char
 * Return: 0.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
