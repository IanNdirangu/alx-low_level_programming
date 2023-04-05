#include "main.h"
/**
 * _strlen_recursion - is a function which returns the length of a string
 * @s: contains the string to measure
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
