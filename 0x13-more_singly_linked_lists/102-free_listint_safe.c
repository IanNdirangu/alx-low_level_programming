#include "lists.h"
/**
 * free_listint_safe - This is a function that frees a listint_t list.
 * @h: This is a pointer to the first node in the listint_t linked list
 *
 * Return: On success, the size of the list that was free’d is returned
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int y;
	listint_t *z;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			z = (*h)->next;
			free(*h);
			*h = z;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}

	*h = NULL;

	return (x);
}
