#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - for adding a text to a file
 * @filename: the name of the file or the file
 * @text_content: the content to be added
 * Return: returns 1 if successfull and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
