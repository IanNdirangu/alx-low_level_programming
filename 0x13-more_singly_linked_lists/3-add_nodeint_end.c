#include "lists.h"

/**
 * add_nodeint_end - This is a function that adds a new node
 * at the end of a listint_t list.
 * @head: This is a pointer to the first element in the listint_t list
 * @n: The data to input in the new element
 *
 * Return: On success, the address of the new element is returned
 * NULL is returned, if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	while (y->next)
		y = y->next;

	y->next = x;

	return (x);
}
