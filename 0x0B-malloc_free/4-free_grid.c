#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Functiont that frees a 2 dimensional grid
 * @grid: pointer to pointer to 2 dimensional grid
 * @height: Height of grid.
 * Return: free grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
