#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - determines if an input integer is a prime number or not
 * @n: contains the number to be assessed
 *
 * Return: if the value of n is a prime number, return 1. If not, return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively checks if an integer is a prime number
 * @n: contains the number to assessed
 * @i: is an iterator
 *
 * Return: if the value of n is a prime number, return 1. If not, return 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
