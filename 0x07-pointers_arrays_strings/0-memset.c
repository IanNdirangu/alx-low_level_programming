#include "main.h"
/**
 * _memset - this function fills a memory block with a specific value
 * @s: this is the starting address of the memory block to be filled
 * @b: this is the desired value
 * @n: this is the number of bytes to be changed
 *
 * Return: A changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

