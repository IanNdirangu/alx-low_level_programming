#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees up the 2 dimensional array
 * @grid: a grid of 2 dimensions
 * @height: the height of the 2 dimensional grid
 * Return: Nothing is to be returned
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
