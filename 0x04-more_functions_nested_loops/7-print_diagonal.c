#include "holberton.h"

/**
 *print_diagonal - Draws a diagonal line.
 *@n: Length of the line drawn.
 */

void print_diagonal(int n)
{
	int idx, sidx;

	if (n > 0)
	{
		for (idx = 0; idx < n; idx++)
		{
			for (sidx = 0; sidx < idx; sidx++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
