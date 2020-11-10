#include "holberton.h"

/**
 * create_file - Creates a file.
 * @filename: Is the file in question.
 * @text_content: Data inside file.
 * Return: -1 for NULL and 1 for success.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, idx;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (idx = 0; text_content[idx] != '\0'; idx++)
		{
		}
		if (write(fd, text_content, idx) == 1)
		{
			return (1);
		}
	}
	close(fd);
	return (1);
}
