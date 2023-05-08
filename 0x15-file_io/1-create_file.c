#include "main.h"

/**
 * create_file - This is a function that creates a file
 * @filename: This is a pointer to the name of the file to be created
 * @text_content: This is a pointer to a string to write into the file
 *
 * Return: On success, the function returns 1.
 * Otherwise, the function returns -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
