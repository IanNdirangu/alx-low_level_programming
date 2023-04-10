#include "main.h"
/**
 *_memcpy - is a function that copies memory area
 *@dest: the area where memory is stored
 *@src: the area where memory is copied
 *@n: amount of bytes
 *
 *Return: the copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
