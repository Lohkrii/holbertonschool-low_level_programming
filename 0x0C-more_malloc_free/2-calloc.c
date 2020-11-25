#include "holberton.h"

/**
 * _calloc - Allocates and fills memory with 0.
 * @nmemb: Number of bytes to allocate.
 * @size: Size of the allocation.
 * Return: Returns a void pointer with values of 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *grid;
	char *str;
	unsigned int idx;

	/* Edge cases */
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	/* assigning memory from the heap using malloc */
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (grid = str, idx = 0; idx < (nmemb * size);idx++)
	{
		str[idx] = 0;
	}
	return (grid);
}
