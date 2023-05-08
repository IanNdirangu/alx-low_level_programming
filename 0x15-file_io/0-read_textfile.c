#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- This is a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: This is the text file being read
 * @letters: This is the number of letters to be read
 * Return: On success, return the actual number of bytes read and printed
 * On function failure or filename is NULL, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *k;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	k = malloc(sizeof(char) * letters);
	z = read(x, k, letters);
	y = write(STDOUT_FILENO, k, z);

	free(k);
	close(x);
	return (y);
}
