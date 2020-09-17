# include <stdio.h>

/**
* main - Write a program that prints the lowercase alphabet
*  in reverse, followed by a new line.
* -You can only use the putchar function (every other function
*  (printf, puts, etc) is forbidden)
* -All your code should be in the main function
* -You can only use putchar twice in your code
* Return: 0
*/

int main(void)
{
	int letter;

	for (letter = 122; letter > 96; --letter)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
