#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#define ERR_MSG "Error"
/**
 * is_digit - a function that examines if a string contains a non-digit char
 * @s: the string to be examined
 *
 * Return: If a non-digit is found return 0, otherwise return 1
 */
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * _strlen - a function that returns the length of a given string
 * @s: string to examine
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * errors - function that handles errors occurring in main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a function that multiplies two positive numbers
 * @argc: amount of arguments
 * @argv: an array of arguments
 *
 * Return: On success return 0
 */
int main(int argc, char *argv[])
{
	char *a, *b;
	int range1, range2, range, k, c, val1, val2, *sol, z = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !is_digit(a) || !is_digit(b))
		errors();
	range1 = _strlen(a);
	range2 = _strlen(b);
	range = range1 + range2 + 1;
	sol = malloc(sizeof(int) * range);
	if (!sol)
		return (1);
	for (k = 0; k <= range1 + range2; k++)
		sol[k] = 0;
	for (range1 = range1 - 1; range1 >= 0; range1--)
	{
		val1 = a[range1] - '0';
		c = 0;
		for (range2 = _strlen(b) - 1; range2 >= 0; range2--)
		{
			val2 = b[range2] - '0';
			c += sol[range1 + range2 + 1] + (val1 * val2);
			sol[range1 + range2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			sol[range1 + range2 + 1] += c;
	}
	for (k = 0; k < range - 1; k++)
	{
		if (sol[k])
			z = 1;
		if (z)
			_putchar(sol[k] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(sol);
	return (0);
}
