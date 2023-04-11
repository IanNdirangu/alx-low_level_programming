#include <stdlib.h>
#include "main.h"
/**
 * count_word - function to tally the amount of words within a string
 * @s: string to examine
 *
 * Return: Amount of words
 */
int count_word(char *s)
{
	int sign, z, w;

	sign = 0;
	w = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] == ' ')
			sign = 0;
		else if (sign == 0)
		{
			sign = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - a function that splits a string into words
 * @str: the string to be split
 *
 * Return: On success, return pointer to an array of strings
 * On error, return NULL
 */
char **strtow(char *str)
{
	char **x, *y;
	int a, b = 0, l = 0, names, z = 0, begin, stop;

	while (*(str + l))
		l++;
	names = count_word(str);
	if (names == 0)
		return (NULL);

	x = (char **) malloc(sizeof(char *) * (names + 1));
	if (x == NULL)
		return (NULL);

	for (a = 0; a <= l; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (z)
			{
				stop = a;
				y = (char *) malloc(sizeof(char) * (z + 1));
				if (y == NULL)
					return (NULL);
				while (begin < stop)
					*y++ = str[begin++];
				*y = '\0';
				x[b] = y - z;
				b++;
				z = 0;
			}
		}
		else if (z++ == 0)
			begin = a;
	}

	x[b] = NULL;

	return (x);
}
