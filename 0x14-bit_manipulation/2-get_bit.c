#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: This is the number to search
 * @index: is the index of the bit, starting from 0 of the bit you want to get
 *
 * Return: On success the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
