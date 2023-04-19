#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is a function that prints its own opcodes
 * @argc: The amount of arguments passed to the program
 * @argv: An array of arguments passed to the program
 *
 * Return: The function returns 0 on success
 */
int main(int argc, char *argv[])
{
	int x, y;
	char *z;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	z = (char *)main;

	for (y = 0; y < x; y++)
	{
		if (y == x - 1)
		{
			printf("%02hhx\n", z[y]);
			break;
		}
		printf("%02hhx ", z[y]);
	}
	return (0);
}
