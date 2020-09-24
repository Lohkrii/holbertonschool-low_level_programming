#include "holberton.h"

/**
 * _isupper - Checks for uppercase letter.
 *
 * @c: is the variable in question.
 *
 * Return: return 1 for upper.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
