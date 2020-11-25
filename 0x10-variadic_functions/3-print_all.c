#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_c - Prints a char.
 * @list: Args from list.
 */

void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_i - Prints an int.
 * @list: Args from list.
 */

void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_f - Prints a float.
 * @list: Args from list.
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_s - Prints a pointer.
 * @list: Args from list.
 */

void print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}

/**
 * print_all - Prints everything.
 * @format: Character to print.
 */

void print_all(const char * const format, ...)
{

	va_list list;
	int idx, cidx;
	char *ptr = "";
	char *ptr2 = ", ";

	all_list all_types[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(list, format);

	for (idx = 0; format && format[idx] != '\0'; idx++)
	{
		for (cidx = 0; all_types[cidx].c != NULL; cidx++)
		{
			if (format[i] == all_types[cidx].c[0])
			{
				printf("%s", ptr);
				all_types[cidx].f(list);
				ptr = ptr2;
			}
		}
	}
	printf("\n");

	va_end(list);
}
