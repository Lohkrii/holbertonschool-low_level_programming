#include "holberton.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 *
 * @s: Char value in question.
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
