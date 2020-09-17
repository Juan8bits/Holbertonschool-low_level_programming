# include <stdio.h>

/**
* main - Write a program that prints all single digit
*  numbers of base 10 starting from 0, followed by a new line.
* -All your code should be in the main function
* Return: 0
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");
	return (0);
}
