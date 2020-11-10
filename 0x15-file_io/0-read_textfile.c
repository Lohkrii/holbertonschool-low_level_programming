#include "holberton.h"

/**
 * read_textfile - Read a file and prints its content.
 * @filename: Is the file in question.
 * @letters: The to be printed letters.
 * Return: 1 for success, -1 for failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *membuf;
	int fd;
	unsigned int idx = 0;
	ssize_t output;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	buf = malloc(sizeof(char) * (letters + 1));
	if (membuf == NULL)
	{
		return (0);
	}


	for (idx = 0; idx <= letters; idx++)
	{
		membuf[idx] = '\0';
	}
	if (fd == -1)
	{
		free(membuf);
		return (0);
	}
	if (read(fd, membuf, letters) == -1)
	{
		free(membuf);
		return (0);
	}
	for (idx = 0; membuf[idx] != '\0'; idx++)
	{
	}
	output = write(STDOUT_FILENO, buf, idx);
	close(fd);
	free(membuf);
	return (output);
}
