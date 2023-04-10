#include "main.h"
/**
 * _strstr - the point of entry
 * @haystack: input value
 * @needle: input value
 * Return: Always return 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (0);
}
