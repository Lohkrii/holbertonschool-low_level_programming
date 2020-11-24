#include "holberton.h"

/**
 * puts2 - Prints every other character in a string.
 * @str: The string to be manipulated.
 */

void puts2(char *str)
{
	int idx;

	for (idx = 0; str[idx]; idx++)
	{
		if (idx % 2 == 0)
		{
			_putchar(str[idx]);
		}
	}
	_putchar('\n');
}

