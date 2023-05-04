#include "main.h"
/**
 * print_binary - This function prints the binary representation of a number
 * @n: This is the number to be printed in binary notation
 */
void print_binary(unsigned long int n)
{
	int x, tally = 0;
	unsigned long int y;

	for (x = 63; x >= 0; x--)
	{
		y = n >> x;

		if (y & 1)
		{
			_putchar('1');
			tally++;
		}
		else if (tally)
			_putchar('0');
	}
	if (!tally)
		_putchar('0');
}
