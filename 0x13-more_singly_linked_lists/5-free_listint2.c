#include "lists.h"
/**
 * free_listint2 - This function frees a listint_t list
 * @head: This is the listint_t list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}

	*head = NULL;
}
