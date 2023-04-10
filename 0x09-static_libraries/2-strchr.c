#include "main.h"
#include <stddef.h>
/**
 * _strchr - this is the entry point
 * @s: contains the input character
 * @c: contains the input character
 * Return: Always 0 when successful
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
