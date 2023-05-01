#include "lists.h"
/**
 * find_listint_loop - This is a function that finds the loop in a linked list.
 * @head: This is a pointer to the linked list to search for
 *
 * Return: On success, the function returns the address of the node where
 * the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
		return (NULL);

	while (x && y && y->next)
	{
		y = y->next->next;
		x = x->next;
		if (y == x)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (y);
		}
	}

	return (NULL);
}
