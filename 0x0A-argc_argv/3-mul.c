#include <stdio.h>
#include "main.h"
/**
 * _atoi - a function that converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted int from the string
 */
int _atoi(char *s)
{
	int a, b, n, x, y, z;

	a = 0;
	b = 0;
	n = 0;
	x = 0;
	y = 0;
	z = 0;

	while (s[x] != '\0')
		x++;

	while (a < x && y == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			z = s[a] - '0';
			if (b % 2)
				z = -z;
			n = n * 10 + z;
			y = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			y = 0;
		}
		a++;
	}

	if (y == 0)
		return (0);

	return (n);
}

/**
 * main - is a function multiplies two numbers in a program
 * @argc: amount of arguments
 * @argv: an array of arguments
 *
 * Return: If success return 0, otherwise return 1
 */
int main(int argc, char *argv[])
{
	int ans, val1, val2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	val1 = _atoi(argv[1]);
	val2 = _atoi(argv[2]);
	ans = val1 * val2;

	printf("%d\n", ans);

	return (0);
}
