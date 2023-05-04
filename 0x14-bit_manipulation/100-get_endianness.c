#include "main.h"
/**
 * get_endianness - This is a function that checks the endianness.
 * Return: If big endian, return 0 and if little endian, return 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
