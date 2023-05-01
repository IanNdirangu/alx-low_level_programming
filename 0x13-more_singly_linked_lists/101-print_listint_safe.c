#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This function counts the amount of unique nodes
 * in a looped listint_t linked list.
 * @head: This is a pointer to the head of the listint_t to examine.
 *
 * Return: If the list is not looped, the function returns 0.
 * Otherwise, the function returns the a,ount of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t z = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				z++;
				x = x->next;
				y = y->next;
			}

			x = x->next;
			while (x != y)
			{
				z++;
				x = x->next;
			}

			return (z);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - This function prints a listint_t linked list safely.
 * @head: This is a pointer to the head of the listint_t list.
 *
 * Return: On success, the function returns amount of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t z, k = 0;

	z = looped_listint_len(head);

	if (z == 0)
	{
		for (; head != NULL; z++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (k = 0; k < z; k++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (z);
}
