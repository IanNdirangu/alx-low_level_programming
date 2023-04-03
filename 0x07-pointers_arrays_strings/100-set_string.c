#include "main.h"
/**
 * set_string - this is a function that sets the value of a pointer to a char
 * @s: is a pointer to pointer
 * @to: is a pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
