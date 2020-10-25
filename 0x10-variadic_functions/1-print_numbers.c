#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers divided by a seprator.
 * @separator: separates the numbers in string form.
 * @n: Is the number of arguments passed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	va_list nbrz;

	va_start(nbrz, n);
	if (separator != NULL)
	{
		for (idx = 0; idx < n; idx++)
		{
			if (idx != n-1)
			{
				printf("%d%s", va_arg(nbrz, int), separator);
			}
			else
			{
				printf("%d", va_arg(nbrz, int));
			}
		}
		printf("\n");
	}
}
