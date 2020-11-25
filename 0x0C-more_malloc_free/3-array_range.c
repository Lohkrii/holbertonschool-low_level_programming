#include "holberton.h"

/**
 * array_range - Creates an array of integers.
 * @min: Minimum int.
 * @max: Maximum int.
 * Return: Pointer to array holder.
 */

int *array_range(int min, int max)
{
	int *numbers;
	int idx, cidx;

	/* edge cases */
	if (min > max)
		return (NULL);

	numbers = malloc(sizeof(int) * (max - min + 1));

	/* malloc NULL edge case */
	if (numbers == NULL)
		return (NULL);

	for (idx = 0, cidx = min; cidx <= max; idx++, cidx++)
	{
		numbers[idx] = cidx;
	}
	return (numbers);
}


