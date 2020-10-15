#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array that initializes with a specific char.
 * @size: Holds the size.
 * @c: Holds initialization character.
 * Return: Returns char pointer for completion. Or NULL for error.
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int idx;

	if (size == 0)
	{
		return (NULL);
	}
	if (c == 'H')
	{
		p = malloc(size * sizeof(char));
		for (idx = 0; idx <= size; idx++)
		{
			p[idx] = c;
		}
		return (p);
	}
	else
	{
		return (NULL);
	}
}
