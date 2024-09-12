#include "main.h"
#include <stdio.h>

/**
 * copy_to - for copying data from file_from to file_to
 * @file_from: the file containing the data to be copied
 * @file_to: the file to recieve the data
 * Return: returns 0
 */

void copy_to(char *file_from, char *file_to)
{
	int fd1;
	int fd2;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd1);
		exit(99);
	}

	while ((bytes_read = read(fd1, buffer, 1024)) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd2);
			close(fd1);
			exit(99);
		}

	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd2);
		close(fd1);
		exit(98);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
}

/**
 * main - for copying data from one file to the other
 * @argc: the arguement count
 * @argv: the arguement vectors
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_to(argv[1], argv[2]);

	return (0);
}
