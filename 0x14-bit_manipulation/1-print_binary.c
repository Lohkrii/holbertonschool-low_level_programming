#include "holberton.h"

/**
 * print_binary - Prints a representation of a number in bit form.
 * @n:
 *
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if ((n >> 1) != 0)
		{
			print_binary(n >> 1);
		}
		_putchar((n & 1) + '0');
	}
}
