#include <stdlib.h>
#include "main.h"
/**
 * *_memset - a function that fills a memory with a constant byte
 * @s: the memory area to fill
 * @b: the characters to copy
 * @n: amount of times to copy b
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: amount of elements in the array
 * @size: the size of each element in the array
 *
 * Return: A pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL)
		return (NULL);

	_memset(x, 0, nmemb * size);

	return (x);
}
