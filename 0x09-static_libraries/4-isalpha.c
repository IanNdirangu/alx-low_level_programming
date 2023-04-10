#include "main.h"

/**
 * _isalpha - a function that looks for alphabetic character
 * @c: the character to be examined
 * Return: if c is a letter retutn 1, otherwise return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
