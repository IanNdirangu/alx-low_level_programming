#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function that print name using a pointer to a function
 * @name: is the string to add
 * @f: is a pointer to the function
 * Return: on success, the function returns nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
