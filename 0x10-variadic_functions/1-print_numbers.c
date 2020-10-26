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
	if (n > 0)
	{
		if (separator == NULL)
		{
			separator = "";
		}
		for (idx = 0; idx < n; idx++)
		{
			printf("%d", va_arg(nbrz, int));
			if (idx != n-1)
			{
				if (separator != NULL)
				{
					printf("%s", separator);
				}
			}
		}
		printf("\n");
	}
	va_end(nbrz);
}
