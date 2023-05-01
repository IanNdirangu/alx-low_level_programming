#include "lists.h"

/**
 * get_nodeint_at_index - This is a function that returns
 * the nth node of a listint_t linked list
 * @head: This is the first node in the listint_t list
 * @index: This is the index of the node to return
 *
 * Return: On success, the function returns a pointer to the node
 * we're looking for, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *y = head;

	while (y && x < index)
	{
		y = y->next;
		x++;
	}

	return (y ? y : NULL);
}
