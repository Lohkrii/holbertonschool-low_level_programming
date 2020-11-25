#include "holberton.h"

/**
 * print_diagsums - Prints the sum of the two
 * diagnals of a square matrix of ints.
 * @a: Array to calculate.
 * @size: Size of the array.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, idx;

	for (idx = 0; idx < size; idx++)
		sum1 += a[((size + 1) * idx)];
	for (idx = 0; idx < size; idx++)
		sum2 += a[((size - 1) * (idx + 1))];
	printf("%d, %d\n", sum1, sum2);

}
