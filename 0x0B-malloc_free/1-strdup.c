#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that duplicates to new memory space location
 * @str: string of characters
 * Return: On success, function returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *x;
	int y, z = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;

	x = malloc(sizeof(char) * (y + 1));

	if (x == NULL)
		return (NULL);

	for (z = 0; str[z]; z++)
		x[z] = str[z];
	return (x);
}
