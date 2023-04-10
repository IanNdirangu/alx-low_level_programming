#include <stdio.h>
#include "main.h"
/**
 * main - function that prints the number of arguments passed into the program
 * @argc: amount of arguments
 * @argv: an array of arguments
 *
 * Return: Always return 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	/*Disregard argv*/
	printf("%d\n", argc - 1);

	return (0);
}
