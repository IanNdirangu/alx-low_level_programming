#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: The amount of parameters passed to the program
 * @...: A variable amount of parameters for the sum calculation
 *
 * Return: If n == 0, then return 0.
 *         Otherwise then return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, ans = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		ans += va_arg(ap, int);

	va_end(ap);

	return (ans);
}
