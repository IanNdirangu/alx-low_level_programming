#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - a funciton that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory block previously allocated by malloc
 * @old_size: the size of the allocated memory block for ptr
 * @new_size: the new size of the new memory block
 *
 * Return: A pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *b;
	char *a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	b = malloc(new_size);
	if (!b)
		return (NULL);

	a = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			b[x] = a[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			b[x] = a[x];
	}

	free(ptr);
	return (b);
}
