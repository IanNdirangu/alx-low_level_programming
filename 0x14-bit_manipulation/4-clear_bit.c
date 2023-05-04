#include "main.h"
/**
 * clear_bit - This function sets the value of a bit to 0 at a given index.
 * @n: This is a pointer to the number to be altered
 * @index: is the index of the bit, starting from 0 of the bit you want to get
 *
 * Return: On success, return 1 or if an error occurs return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
