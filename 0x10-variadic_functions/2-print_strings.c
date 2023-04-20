#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between strings.
 * @n: is the number of strings passed to the function.
 * @...: is a variable amount of the strings to be printed.
 *
 * Description: If separator is NULL, it won’t be printed
 *              If one of the strings is NULL, print (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int x;
	char *y;

	va_start(strings, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(strings, char *);

		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
