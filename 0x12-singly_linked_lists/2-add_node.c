#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This function that adds a new node
 * at the beginning of a list_t list.
 * @head: where head is a double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: On success, the function returns the address of the new element,
 * and returns NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int len = 0;

	while (str[len])
		len++;

	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);

	x->str = strdup(str);
	x->len = len;
	x->next = (*head);
	(*head) = x;

	return (*head);
}

