#include "holberton.h"

/**
 * print_array - Prints n number of elements to print of an array.
 * @a: The array in question.
 * @n: The (n)umbers of characters to print.
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		if (idx > 0)
		{
			printf(", ");
		}
		printf("%i", a[idx]);
	}
	printf("\n");
}
