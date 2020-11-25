
#include "holberton.h"

/**
 * print_triangle - Draws a triangle int the terminal.
 * @size: Size of th triangle.
 */

void print_triangle(int size)
{
	int idx, cidx, qidx;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (idx = 1, qidx = size; idx <= size; qidx--, idx++)
	{
		for (cidx = 1; cidx <= size; cidx++)
		{
			if (cidx >= qidx)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
