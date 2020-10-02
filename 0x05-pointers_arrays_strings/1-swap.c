#include "holberton.h"

/**
 * swap_int - swaps the values of both variables.
 *
 * @a: is the 1st variable.
 *
 * @b: is the 2nd variable.
*/

void swap_int(int *a, int *b)
{
	int *ip = &*a;
	int *ix = &*b;
	int result_a = *a;
	int result_b = *b;

	*ip = result_b;
	*ix = result_a;
}
