#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the fuction to print the minimum number of coins to make change
 * for an amount of money
 * @argc: amount of arguments
 * @argv: an array of arguments
 *
 * Return: Always return 0 on success, otherwise return 1 on error
 */
int main(int argc, char *argv[])
{
	int x, y, ans;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	ans = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= c[y])
		{
			ans++;
			x -= c[y];
		}
	}

	printf("%d\n", ans);
	return (0);
}
