#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - a function that examines if there are digit in a string
 * @str: an array
 *
 * Return: Always 0 upon success
 */
int check_num(char *str)
{
/*Variable Declaration*/
	unsigned int tally;

	tally = 0;
	while (tally < strlen(str))
/* tally string*/

	{
		if (!isdigit(str[tally]))
/*examines str if there are digit*/
		{
			return (0);
		}

		tally++;
	}
	return (1);
}

/**
 * main - a function to print the program name
 * @argc: to tally arguments
 * @argv: the arguments
 *
 * Return: Always return 0 upon success
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
	int tally;
	int x;
	int total = 0;

	tally = 1;
	while (tally < argc)
/*Goes through the whole array*/
	{
		if (check_num(argv[tally]))
		{
			x = atoi(argv[tally]);
/*ATOI --> convert string to int*/
			total += x;
		}
/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		tally++;
	}
	printf("%d\n", total);
/*print the total*/
	return (0);
}
