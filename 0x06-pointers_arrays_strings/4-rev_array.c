#include "holberton.h"

/**
 *reverse_array - Reverses an array of integers.
 *@a: The array in question.
 *@n: The number of elements to be reversed.
 */

void reverse_array(int *a, int n)
{
	int holder, idx;

	for (idx = 0; n > idx; idx++)
	{
		n--;
		holder = a[idx];
		a[idx] = a[n];
		a[n] = holder;
	}
}
