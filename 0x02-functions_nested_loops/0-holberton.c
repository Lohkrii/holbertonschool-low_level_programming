#include "holberton.h"

/**
 * main - Prints to st "Holberton"
 *
 * Return: Must return 0 for compliance.
*/

int main(void)
{
	char n[9] = "Holberton";

	int x;

	for (x = 0; x < 9; x++)
	{
		_putchar(n[x]);
	}
	_putchar('\n');
	return (0);
}
