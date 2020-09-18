# include <stdio.h>

/**
* main - Write a program that prints all the numbers of base 16
*  in lowercase, followed by a new line.
* -You can only use the putchar function (every other function
*  (printf, puts, etc) is forbidden)
* -All your code should be in the main function
* -You can only use putchar three times in your code
* Return: 0
*/

int main(void)
{
	int letter;

	for (letter = 48; letter < 58; ++letter)
	{
		putchar(letter);
		if (letter == 57)
		{
			for (letter = 97; letter < 103; ++letter)
				putchar(letter);
			letter = 57;
		}
	}
	putchar(10);
	return (0);
}
