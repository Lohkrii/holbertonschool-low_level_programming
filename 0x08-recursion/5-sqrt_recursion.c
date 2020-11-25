#include "holberton.h"

/**
 * check_square - checks if the number can be squared evenly.
 * @n: The number to calculate.
 * @x: The increment
 * Return: Returns the sqared number or -1 for failure.
 */

int check_square(int n, int x)
{
	if (n == (x * x))
		return (x);
	if (x * x > n)
		return (-1);
	return (check_square(n, x + 1));
}

/**
 * _sqrt_recursion - Function that verifies the square root.
 * @n: Number to calculate.
 * Return: Returns the square root.
 */

int _sqrt_recursion(int n)
{

	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 1)
		return (-1);

	return (check_square(n, 1));
}
