#include "holberton.h"

/**
 * print_numbers - Prints numbers 0-9.
 *
 * Return: returns 0 for success.
*/

int print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
