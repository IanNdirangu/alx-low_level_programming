#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: the string to copy to
 * @src: the string to copy from
 * Return: the string
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; x < y ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
