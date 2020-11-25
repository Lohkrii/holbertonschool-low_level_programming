#include "holberton.h"

/**
 * print_chessboard - Prints a chessboard and its pieces.
 * @a: Multidimensional array.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int idx, cidx;

	for (idx = 0; idx < 8; idx++)
	{
		for (cidx = 0; cidx < 8; cidx++)
		{
			if (cidx < 7)
			{
				_putchar(a[idx][cidx]);
			}
			if (cidx == 7)
			{
				_putchar(a[idx][cidx]);
				_putchar('\n');
			}
		}
	}
}
