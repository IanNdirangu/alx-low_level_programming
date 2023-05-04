#include "main.h"

/**
 * flip_bits - This is a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: The amount of bits to be altered
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, tally = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		a = b >> x;
		if (a & 1)
			tally++;
	}

	return (tally);
}

