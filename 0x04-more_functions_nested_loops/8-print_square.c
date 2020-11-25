#include "holberton.h"

/**
 * print_square - Prints a square in the terminal.
 * @size: Size of the sqaure.
 */

void print_square(int size)
{
	int idx, cidx;

	if (size <= 0)
		_putchar('\n');
	for (idx = 1; idx <= size; idx++)
	{
		for (cidx = 1; cidx <= size; cidx++)
			_putchar('#');
		_putchar('\n');
	}
}
