#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Function that concatenates all the argumentos of your program.
 * @ac: Number of parameters.
 * @av: pointer to pointer to parameters
 * Return: New string or Null
 */
char *argstostr(int ac, char **av)
{
	char *p = NULL;
	short int i, j, sum, k;

	sum = 0, k = 0;
	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			j++, sum++;
		}
	}
	sum += ac + 1;

	p = malloc(sizeof(char *) * sum);

	if (p == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			p[k] = av[i][j];
			j++, k++;
		}
		p[k] = 10;
		k++;
	}
	p[k] = '\0';
	return (p);
}
