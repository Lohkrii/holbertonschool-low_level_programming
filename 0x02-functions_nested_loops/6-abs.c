#include "holberton.h"

/**
 * _abs - Prints absolute value of integer.
 *
 * @N: is the input variable.
 *
 * Return: must be 0
*/
int _abs(int N)
{

	if (N < 0)
	{
		N = (-1) * N;
	}
	_putchar('\n');
	return (N);
}
