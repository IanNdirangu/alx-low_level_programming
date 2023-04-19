#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This function returns the sum of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The function returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This function returns the difference of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The function returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This function returns the product of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The function returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This function returns the division of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The function returns the quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This function returns the remainder of the division of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The function returns the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
