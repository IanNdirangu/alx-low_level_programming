#include <unistd.h>
/**
 * _putchar - this is a function that writes the character c to stdout
 * @c: contains the character set to print
 *
 * Return: 1 if successful
 * Return -1 if an error occurs, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
