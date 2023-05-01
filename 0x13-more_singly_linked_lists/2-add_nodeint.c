#include "lists.h"
/**
 * add_nodeint - This is a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: This is a pointer to the first node in listint_t the list
 * @n: This is the data to input in the new node
 *
 * Return: On success, the address of the new element is returned
 * NULL is returned, if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}
