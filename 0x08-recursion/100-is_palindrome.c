#include "main.h"
int check_pal(char *s, int x, int y);
int _strlen_recursion(char *s);
/**
 * is_palindrome - is a function that checks if a string is a palindrome
 * @s: contains the string to reverse
 *
 * Return: if it is a palindrome, return 1. If it's not, return 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - is a function that returns the length of a string
 * @s: contains the string to determine its length
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - recursively examines the characters for palindrome
 * @s: contains the string to examine
 * @x: is an iterator
 * @y: the string length
 *
 * Return: if it is a palindrome, return 1. If it's not, return 0
 */
int check_pal(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0);
	if (x >= y)
		return (1);
	return (check_pal(s, x + 1, y - 1));
}
