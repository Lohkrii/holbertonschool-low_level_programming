#include "holberton.h"

/**
 * print_sign - Prints the sign of the number.
 * 
 * Return: If 1 = positive, if 0 = zero, if -1 = negative.
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	return (n);
}
