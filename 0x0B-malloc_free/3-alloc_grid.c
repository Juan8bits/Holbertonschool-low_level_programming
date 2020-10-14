#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array of
 * integers
 * @width: Width of array.
 * @height: Height of array.
 * Return: Pointer or Null.
 */

int **alloc_grid(int width, int height)
{
	short int i, j;
	int **h;

	if (width <= 0 || height <= 0)
		return (NULL);

	h = (int **) malloc(sizeof(int *) * height);
	if (h == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		h[i] = (int *) malloc(sizeof(int) * width);
		if (h[i] == NULL)
		{
			for (; i >= 0; i--)
				free(h[i]);
			free(h);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			h[i][j] = 0;
		}
	}
	return (h);
}
