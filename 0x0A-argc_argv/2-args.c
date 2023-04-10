#include <stdio.h>
#include "main.h"
/**
 * main - function to print all arguments a program receives
 * @argc: the amount of arguments
 * @argv: an array of arguments
 *
 * Return: Always return 0 on success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
