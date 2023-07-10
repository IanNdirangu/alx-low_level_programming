#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *file);
void exit_file(int fd);

/**
 * make_buffer - This is a function to assign 1024 bytes for a buffer.
 * @file: This is the filename that the buffer's chars are stored in.
 *
 * Return: On success, a pointer to the newly-allocated buffer is returned
 */
char *make_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * exit_file - This is a function where file descriptors are closed
 * @fd: This is the file descriptor to close
 */
void exit_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This function copies the content of a file to another file.
 * @argc: This is the amount of arguments passed to the program.
 * @argv: This is an array of pointers to the arguments.
 *
 * Return: On success, the function returns 0
 */
int main(int argc, char *argv[])
{
	int from, to, x, y;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	x = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		y = write(to, buffer, x);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		x = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buffer);
	exit_file(from);
	exit_file(to);

	return (0);
}
