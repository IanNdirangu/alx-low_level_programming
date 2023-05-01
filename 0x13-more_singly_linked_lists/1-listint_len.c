#include "lists.h"

/**
 * listint_len - This is a function that returns the number of
 * elements in a linked listint_t list.
 * @h: This is the linked list of type listint_t to traverse
 *
 * Return: The amount of nodes is returned on success
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
