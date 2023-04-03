#include "main.h"
/**
 * _strchr - this is a function that locates a character in a string
 * @s: input
 * @c: input
 * Return: Always 0 if successful
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
