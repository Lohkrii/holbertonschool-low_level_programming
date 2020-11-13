#include "holberton.h"

/**
 * print_to_98 - Prints all natural numbers followed by a new line.
 * @n: Is the nth number.
 */

void print_to_98(int n)
{
	int num_count;

	if (n <= 98)
	{
		for (num_count = n; num_count <= 98; num_count++)
		{
			if (num_count == 98)
			{
				printf("%d", num_count);
			}
			else
				printf("%d, ", num_count);
		}
		putchar('\n');
	}
	else
	{
		for (num_count = n; num_count >= 98; num_count--)
		{
			if (num_count == 98)
			{
				printf("%d", num_count);
			}
			else
				printf("%d, ", num_count);
		}
		putchar('\n');
	}
}
