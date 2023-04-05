#include "main.h"
/**
 * _print_rev_recursion - is a funtion that prints a string in reverse.
 * @s: contains the string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
