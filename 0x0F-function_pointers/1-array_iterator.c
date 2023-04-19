#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - This function prints each array element on a new line
 * @array: An array of elements passed to the program
 * @size: The amount of elements to be printed
 * @action: is a pointer to the function you need to use
 * Return: The function returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
