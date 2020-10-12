#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that add positive integer.
 * @argc: int number. size of argv.
 * @argv: char.
 * Return: Error & 1 if arcg < 3, else, value.
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ( argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
