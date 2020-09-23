#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * Return: Must be 0.
*/

void print_alphabet_x10(void)
{
	int x = '0';

	for (x = 0; x < 9;)
	{
		print_alphabet();
		x++;
	}
}
