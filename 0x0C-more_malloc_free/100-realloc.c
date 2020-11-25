#include "holberton.h"

/**
 * _realloc - Reallocates memory.
 * @ptr: Pointer to origin.
 * @old_size: Size of mem to allocate.
 * @new_size: Size of the new pointer.
 * Return: Cantains items of src, plus new size.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m, *c_ptr;
	unsigned int idx;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	m = malloc(new_size);
	if (m == NULL)
		return (NULL);
	idx = old_size;
	if (new_size < old_size)
		idx = new_size;
	for (c_ptr = ptr;;idx--)
		m[idx] = c_ptr[idx];
	free(ptr);
	return (m);
}
