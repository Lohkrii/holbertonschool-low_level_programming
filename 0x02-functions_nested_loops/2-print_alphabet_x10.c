#include "holberton.h"

/**
 *  print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
*/

void print_alphabet_x10(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		char n;

		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
