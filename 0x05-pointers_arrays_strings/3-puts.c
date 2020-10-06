#include "holberton.h"

/**
 * _puts - prints a string followed by a new line.
 *
 * @str: string in question.
*/

void _puts(char *str)
{
	int ip;

	for (ip = 0; *(str + ip) != '\0'; ip++)
	{
		_putchar(str[ip]);
	}
	_putchar('\n');
}
