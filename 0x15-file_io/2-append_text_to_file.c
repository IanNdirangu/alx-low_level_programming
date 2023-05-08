#include "main.h"
/**
 * append_text_to_file - This is a function that appends text at the end of a file.
 * @filename: This is a pointer to the filename
 * @text_content: This is a pointer to a string to write into the file
 *
 * Return: On success, the function returns 1.
 * Otherwise, the function returns -1 on failure.
 * If filename is NULL return -1
 * If the file does not exist or the user lacks write permissions return -1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
