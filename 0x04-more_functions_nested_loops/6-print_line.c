#include "holberton.h"

/**
 * print_line - Draws a straight line on the terminal.
 * @n: Times the '_' character is printed.
 */

void print_line(int n)
{
	int idx;

	for (idx = 0;idx < n; idx++)
		_putchar('_');
	_putchar('\n');
}
