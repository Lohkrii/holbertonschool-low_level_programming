#include "holberton.h"

/**
 *  print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
*/

void print_alphabet_x10(void)
{
	int x = 0;

	for (x = 0; x < 9; x++)
	{
		print_alphabet();
	}
	_putchar('\n');
}
