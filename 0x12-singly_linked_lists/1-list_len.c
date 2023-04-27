#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This function returns the amount of elements
 * in a linked list_t list.
 * @h: pointer to the list_t list
 *
 * Return: On success, the amount of elements in h is returned
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

