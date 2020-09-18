# include <stdio.h>

/**
* main - Write a program that prints the numbers from 00 to 99.
* -Numbers must be separated by ,, followed by a space
* -Numbers should be printed in ascending order, with two digits
* -You can only use the putchar function (every other function
*  (printf, puts, etc) is forbidden)
* -You can only use putchar five times maximum in your code
* -You are not allowed to use any variable of type char
* -All your code should be in the main function
* Return: 0
*/

int main(void)
{
	int uni, dec;

	for (uni = 48; uni < 58; uni++)
	{
		for (dec = 48; dec < 58; dec++)
		{
			putchar(uni);
			putchar(dec);
			if (uni == '9' && dec == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
