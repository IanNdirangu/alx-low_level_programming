#include "main.h"
/**
 *_memcpy - This is a memory area copying function
 *@dest: this memory area is where the bytes will be stored
 *@src: this memory area is where the bytes are being copied from
 *@n: this is the amount of bytes to be copied
 *
 *Return: the duplicate memory area with n bytes changed
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

