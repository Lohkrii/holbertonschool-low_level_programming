#include "holberton.h"

/**
 * print_rev - Prints a strin in reverse followed by a new line.
 * @s: The string to be reversed.
 */

void print_rev(char *s)
{
	int idx;


	for (idx = 0; s[idx] != '\0'; idx++)
		;
	while (idx >= 0)
	{
		_putchar(s[idx]);
		idx--;
	}
	_putchar('\n');
}
