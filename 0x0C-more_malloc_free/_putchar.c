#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success return 1
 * -1 is returned on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
