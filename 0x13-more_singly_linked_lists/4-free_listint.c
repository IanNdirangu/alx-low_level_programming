#include "lists.h"

/**
 * free_listint - This is a function that frees a listint_t list.
 * @head: This is the listint_t list to free
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
