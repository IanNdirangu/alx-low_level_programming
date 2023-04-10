#include "main.h"
/**
 * _strpbrk - The point of entry
 * @s: input value
 * @accept: input vaulue
 * Return: Always return 0 on Success
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
		if (*s == accept[x])
		return (s);
		}
	s++;
	}

return ('\0');
}
