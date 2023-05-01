#include "lists.h"
/**
 * sum_listint - This is a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: This is the first node in the listint_t list
 *
 * Return: On success, the sum is returned or if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *x = head;

	while (x)
	{
		total += x->n;
		x = x->next;
	}

	return (total);
}
