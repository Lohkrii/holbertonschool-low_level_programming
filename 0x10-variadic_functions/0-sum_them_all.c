#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - will count the arguments passed and sum them.
 * @n: is the number of arguments passed.
 * Return: Returns the sum of the arguments.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arghold;
	unsigned int idx;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(arghold, n);
	for (idx = 0; idx < n; idx++)
	{
		sum += va_arg(arghold, int);
	}
	va_end(arghold);
	return (sum);
}
