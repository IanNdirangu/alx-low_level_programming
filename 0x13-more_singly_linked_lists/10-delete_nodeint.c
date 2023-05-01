#include "lists.h"
/**
 * delete_nodeint_at_index - This is a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: This is a pointer to the first element in the list
 * @index: This is the index of the node to be deleted
 *
 * Return: On success, return 1 or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *y = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	while (a < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		a++;
	}


	y = x->next;
	x->next = y->next;
	free(y);

	return (1);
}
