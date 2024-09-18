#include <stdio.h>
#include "main.h"

void check_close(int fd);

/**
 * open_file - opens a file handles errors
 * @file_name: The name of the file to open
 * @flags: Flags to specify the mode of opening the file
 * @mode: The permissions to use if a new file is created
 *
 * Return: The file descriptor on success, or exit on error
 */

int open_file(const char *file_name, int flags, mode_t mode)
{
	int fd;

	fd = open(file_name, flags, mode);
	if (fd == -1)
	{
		if (flags == O_RDONLY)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		else
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(98);
	}

	return (fd);
}

/**
 * read_write - Reads from a file and writes to another
 * @file_from: The file descriptor of the source file
 * @file_to: The file descriptor of the destination file
 * @f_f: the path name for the location to be copied
 * @f_t: the file to contain the copied items
 * Return: void
 */

void read_write(int file_from, int file_to, const char *f_f, const char *f_t)
{
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", f_t);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_f);
		close(file_from);
		close(file_to);
		exit(98);
	}
}

/**
 * check_close - Closes a file and handles errors
 * @fd: the file descriptor to close
 */

void check_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_to - Copies data from one file to another
 * @file_from: The file containing the data to be copied
 * @file_to: the file to receive the data
 *
 * Return: returns void
 */

void copy_to(char *file_from, char *file_to)
{
	int fd1, fd2;

	fd1 = open_file(file_from, O_RDONLY, 0);
	fd2 = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	read_write(fd1, fd2, file_from, file_to);

	check_close(fd1);
	check_close(fd2);
}

/**
 * main - Entry point for copying data from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
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
