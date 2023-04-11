#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function to make a grid using a nested loop
 * @width: input value for width
 * @height: input value for height
 * Return: A pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **j;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	j = malloc(sizeof(int *) * height);

	if (j == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		j[a] = malloc(sizeof(int) * width);

		if (j[a] == NULL)
		{
			for (; a >= 0; a--)
				free(j[a]);

			free(j);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			j[a][b] = 0;
	}

	return (j);
}
