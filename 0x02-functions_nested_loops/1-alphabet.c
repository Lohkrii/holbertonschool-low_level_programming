#include "holberton.h"

/**
 *  print_alphabet- Prints the alphabet in lower case.
 *
 * Return: Must be 0 for execution.
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	
}
