#include "lists.h"
/**
 * pop_listint - This is a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: This a pointer to the first element in the listint_t list
 *
 * Return: On success, the function returns the data within the elements
 * that was deleted, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (!head || !*head)
		return (0);

	y = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (y);
}
