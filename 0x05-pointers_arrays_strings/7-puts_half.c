#include "holberton.h"

/**
 * puts_half - Prints half of a string.
 * @str: Is the string to be printed.
 */

void puts_half(char *str)
{
	int idx, hidx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		;
	}
	if (idx % 2 == 0)
	{
		hidx= idx / 2;
	}
	else
	{
		hidx = ((idx - 1) / 2) + 1;
	}
	while (str[hidx] != '\0')
	{
		_putchar(str[hidx]);
		hidx++;
	}
	_putchar('\n');
}
