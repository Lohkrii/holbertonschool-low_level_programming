#include "holberton.h"

/**
 * _isdigit - Checks for digits 0-9.
 *
 * @c: Is the variable in question.
 *
 * Return: Return 1 if c is of range 0-9.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
