#include <stdio.h>
#include "main.h"
/**
 * main - prints the program name, followed by a new line
 * @argc: the amount of arguments
 * @argv: an array of arguments
 *
 * Return: Always return 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
