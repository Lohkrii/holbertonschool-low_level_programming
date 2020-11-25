#include "holberton.h"

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 */

void print_number(int n)
{
	unsigned int idx;

	if (n < 0)
	{
		_putchar('-');
		idx = -n;
	}
	else
	{
		idx = n;
	}
	if (idx / 10)
	{
		print_number(idx / 10);
	}
	_putchar(idx % 10 + 48);
}
