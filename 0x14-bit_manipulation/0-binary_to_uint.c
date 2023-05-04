#include "main.h"
/**
 * binary_to_uint - This is a function that converts a binary number
 * to an unsigned int.
 * @b: A pointer to the string containing the binary number
 *
 * Return: the converted numberor 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		y = 2 * y + (b[x] - '0');
	}

	return (y);
}
