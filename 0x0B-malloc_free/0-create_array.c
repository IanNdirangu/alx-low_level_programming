#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: NULL if fail, a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	y = malloc(sizeof(char) * size);
	if (size == 0 || y == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		y[x] = c;
	return (y);
}
