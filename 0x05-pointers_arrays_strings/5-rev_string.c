# include "holberton.h"

/**
* rev_string - reverses a string
* @s: string in order
*/

void rev_string(char *s)
{
	short int z, g, i, aux;

	z = 0;
	while (s[z] != '\0')
	{
		z++;
	}
	z--;
	g = 0;
	for (i = z; i >= (z / 2); i--)
	{
		aux = s[g];
		s[g] = s[i];
		s[i] = aux;
		g++;
	}
}
