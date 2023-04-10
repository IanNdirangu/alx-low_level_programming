#include "main.h"
/**
 * _memset - a function that fills a memory block with a specific value
 * @s: the starting address of memory to be filled
 * @b: this is the value desired
 * @n: the amount of bytes to be changed
 *
 * Return: a changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
