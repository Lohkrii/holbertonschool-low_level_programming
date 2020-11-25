#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Is the array to be searched.
 * @size: Is the size of the array.
 * @cmp: Compares values.
 * Return: Returns -1 for error or the idx.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx, check;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		check = cmp(array[idx]);
		if (check)
			return (idx);
	}

	return (-1);
}
