# include "holberton.h"

/**
* rev_string - reverses a string
* @s: string in order
*/

void rev_string(char *s)
{
	short int z, g, aux;
	char *cop;

	cop = s;
	z = 0;
	while (s[z] != '\0')
	{
		z++;
	}
	z--;
	g = 0;
	for (; z >= 0; z--)
	{
		aux = s[z];
		cop[g] = aux;
		g++;
	}
	*s = *cop;
}
