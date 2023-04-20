#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - is a function that prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *a, *b = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", b, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(list, double));
					break;
				case 's':
					a = va_arg(list, char *);
					if (!a)
						a = "(nil)";
					printf("%s%s", b, a);
					break;
				default:
					x++;
					continue;
			}
			b = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
