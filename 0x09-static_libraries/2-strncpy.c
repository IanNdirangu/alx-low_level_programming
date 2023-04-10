#include "main.h"
/**
 * _strncpy - a functions that copies a string
 * @dest: contains value of input
 * @src: contains value of input
 * @n: contains value of input
 *
 * Return: the value in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
