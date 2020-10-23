#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Is the array to be searched.
 * @size: is the size of the array.
 * @cmp: Compares values.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if(size <= 0)
	{
		return (-1);
	}
	for (idx = 0; idx < size; idx++)
	{
		if(cmp(array[idx]) != 0)
		{
			return (idx);
		}
	}
	if(idx == size)
	{
		return (-1);
	}
	return (-1);
}
