#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: where head is a double pointer to the list_t list
 * @str: this is the string to put in the new node
 *
 * Return: On success, the function returns address of the new element,
 * and returns NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x;
	list_t *y = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);

	x->str = strdup(str);
	x->len = len;
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
