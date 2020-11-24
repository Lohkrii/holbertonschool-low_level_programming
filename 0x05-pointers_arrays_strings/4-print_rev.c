#include "holberton.h"

/**
 * print_rev - Prints a strin in reverse followed by a new line.
 * @s: The string to be reversed.
 */

void print_rev(char *s)
{
	int idx, ridx;

	for (idx = 0; *(s + idx) != '\0'; idx++)
		;
	
	for (ridx = (idx - 1); ridx >= 0; ridx--)
	{
		_putchar(*(s + ridx));
	}
	_putchar('\n');
}
