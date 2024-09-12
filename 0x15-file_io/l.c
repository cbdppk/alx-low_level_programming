#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * copy_to - for copying data from file_from to file_to
 * @file_from: the file containing the data to be copied
 * @file_to: the file to receive the data
 * Return: void
 */
void copy_to(char *file_from, char *file_to)
{
    int fd1, fd2;
    ssize_t bytes_read, bytes_written, total_written;
    char buffer[BUF_SIZE];

    fd1 = open(file_from, O_RDONLY);
    if (fd1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(fd1);
        exit(99);
    }

    while ((bytes_read = read(fd1, buffer, BUF_SIZE)) > 0)
    {
        total_written = 0;
        while (total_written < bytes_read)
        {
            bytes_written = write(fd2, buffer + total_written, bytes_read - total_written);
            if (bytes_written == -1)
            {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
                close(fd1);
                close(fd2);
                exit(99);
            }
            total_written += bytes_written;
        }
    }

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(fd1);
        close(fd2);
        exit(98);
    }

    if (close(fd2) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
        close(fd1);
        exit(100);
    }

    if (close(fd1) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
        exit(100);
    }
}

/**
 * main - for copying data from one file to another
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success, error codes otherwise
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
