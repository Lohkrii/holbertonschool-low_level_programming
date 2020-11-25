#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints a string.
 * @separator: String to be printed between the strings.
 * @n: Is the number of arguments passed.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	unsigned int idx;
	char *s;

	va_start(words, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (idx = 0; idx < n; idx++)
	{
		s = va_arg(words, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (idx < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(words);

}
