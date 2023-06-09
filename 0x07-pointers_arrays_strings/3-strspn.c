#include "main.h"
/**
 * _strspn - this is a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 If Successful
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
