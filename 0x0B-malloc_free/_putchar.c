#include <usistd.h>
#include "main.h"
/**
 * _putchar - function that writes character c to stdout
 * @c: character to be printed
 *
 * Return: if successful return 1.
 * If an error occurs, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
