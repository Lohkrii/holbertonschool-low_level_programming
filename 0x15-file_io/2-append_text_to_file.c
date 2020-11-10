#include "holberton.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Is the file thats being written to.
 * @text_content: Is the text thats being appended.
 * Return: 1 for success, -1 for failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, idx;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (idx = 0; text_content[idx] != '\0'; idx++)
		{
		}
		if (write(fd, text_content, idx) == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
