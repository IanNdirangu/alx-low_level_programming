#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: the string to append to
 * @s2: the string to concatenate from
 * @n: amount of bytes from string 2 to concatenate to string 1
 *
 * Return: Returns a pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, a = 0, b = 0;
	char *z;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	if (n < b)
		z = malloc(sizeof(char) * (a + n + 1));
	else
		z = malloc(sizeof(char) * (a + b + 1));

	if (!z)
		return (NULL);

	while (x < a)
	{
		z[x] = s1[x];
		x++;
	}

	while (n < b && x < (a + n))
		z[x++] = s2[y++];

	while (n >= b && x < (a + b))
		z[x++] = s2[y++];

	z[x] = '\0';

	return (z);
}
