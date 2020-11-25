#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Number to factorialize.
 * Return:Factorialized number.
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
