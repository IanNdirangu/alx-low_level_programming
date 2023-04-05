#include "main.h"
/**
 * factorial - this function returns the factorial of the number given
 * @n: contains the number to return the factorial from
 *
 * Return: the factorial of the given number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
