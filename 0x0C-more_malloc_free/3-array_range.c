#include <stdlib.h>
#include "main.h"
/**
 * *array_range - a function that creates an array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored and amount of elements
 *
 * Return: a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *x;
	int y, z;

	if (min > max)
		return (NULL);

	z = max - min + 1;

	x = malloc(sizeof(int) * z);

	if (x == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		x[y] = min++;

	return (x);
}
