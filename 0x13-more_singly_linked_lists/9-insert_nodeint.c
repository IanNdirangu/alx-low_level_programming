#include "lists.h"
/**
 * insert_nodeint_at_index - This is a a function that inserts a new node
 * at a given position.
 * @head: This is a pointer to the first node in the listint_t list
 * @idx: This is the index where the new node is inserted
 * @n: The data to add to the new node
 *
 * Return: On success,  the address of the new node is returned.
 * If it failed, return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (a = 0; y && a < idx; a++)
	{
		if (a == idx - 1)
		{
			x->next = y->next;
			y->next = x;
			return (x);
		}
		else
			y = y->next;
	}

	return (NULL);
}
