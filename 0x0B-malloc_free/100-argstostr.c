#include <stdlib.h>
#include "main.h"
/**
 * argstostr - the main entry point of the program
 * @ac: the input for the integer
 * @av: the double pointer array
 * Return: On success, return 0
 */
char *argstostr(int ac, char **av)
{
	int j, k, x = 0, y = 0;
	char *z;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			y++;
	}
	y += ac;

	z = malloc(sizeof(char) * y + 1);
	if (z == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (k = 0; av[j][k]; k++)
	{
		z[x] = av[j][k];
		x++;
	}
	if (z[x] == '\0')
	{
		z[x++] = '\n';
	}
	}
	return (z);
}
