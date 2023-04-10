#include "main.h"
/**
 * _atoi - a function that transforms a string into an integer
 *
 * @s: the string to be transformed
 *
 * Return: If succesful, return the integer
 */
int _atoi(char *s)
{
	int x = 1, y = 0;
	unsigned int z = 0;

	while (!(s[y] <= '9' && s[y] >= '0') && s[y] != '\0')
	{
		if (s[y] == '-')
			x *= -1;
		y++;
	}
	while (s[y] <= '9' && (s[y] >= '0' && s[y] != '\0'))
	{
		z = (z * 10) + (s[y] - '0');
		y++;
	}
	z *= x;
	return (z);
}

