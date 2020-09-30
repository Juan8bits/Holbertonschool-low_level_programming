#include "holberton.h"
/**
*  _atoi - convert characters to int
* @s: string
* Return: entero
*/

int _atoi(char *s)
{
	int i, signo, entero;

	i = 0;
	signo = 1;
	entero = 0;
	while ((s[i] < 48 || s[i] > 57) && s[i] != '\0')
	{
		if (s[i] == '-')
			signo = signo * -1;
		i++;
	}
	while (s[i] >= 48 || s[i] <= 57)
	{
		entero = entero * 10 + (s[i] - 48);
	}
	entero = entero * signo;
	return (entero);
}
