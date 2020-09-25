# include <stdio.h>

/**
* main - Fizz-Buzz.
* Return: 0.
*/

int main(void)
{
	short int i, tres, cinco;

	for (i = 1; i < 101; i++)
	{
		tres = i % 3;
		cinco = i % 5;

		if(tres == 0 && cinco == 0)
			printf("FizzBuzz ");
		else if (cinco == 0)
			printf("Buzz ");
		else if (tres == 0)
			printf("Fizz ");
		else
			printf("%d ",i);
	}
	printf("\n");
	return (0);
}
