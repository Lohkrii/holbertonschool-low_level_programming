#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter.
 * @array: Is the name or variable of the array.
 * @size: Is the size of the array.
 * @action: Is the pinter to the funtion in use.
*/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int idx;

	for (idx = 0; idx < size; idx++)
	{
		action(array[idx]);
	}
}
