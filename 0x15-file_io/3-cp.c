#include "holberton.h"

/**
 * main - Copies the content of a file to another.
 * @args: Args to copy.
 * @str: Actual data.
 * Return: 1 on success, -1 if fails.f
 */

int main(int args, char **str)
{
	int from, to, close_first, close_second, read_f;
	char membuf[1024];

	if (args != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from = open(str[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", str[1]), exit(98);

	to = open(str[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str[2]), exit(99);

	while ((read_f = read(from, membuf, 1024)) > 0)
	{
		if (write(to, membuf, read_f) == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str[2]), exit(99);
	}
	if (read_f == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str[1]), exit(98);

	close_first = close(from);
	if (close_first == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", from), exit(100);

	close_second = close(to);
	if (close_second == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", to), exit(100);
	return (0);
}
