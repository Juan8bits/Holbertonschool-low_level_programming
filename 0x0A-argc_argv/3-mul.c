#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers
 * @argc: int number. size of argv.
 * @argv: char.
 * Return: Error & 1 if arcg < 3, else, value.
 */

int main(int argc, char *argv[])
{
	int res, num;

	res = 0;
	num = 0;
	if (argc == 3)
	{
		res = atoi(argv[1]);
		num = atoi(argv[2]);
		printf("%d\n", res * num);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
