#include "holberton.h"

/**
 * _pow_recursion - Returns a value x^(y).
 * @x: Number to be calculated upon.
 * @y: The power we are computing.
 * Return: int, x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
