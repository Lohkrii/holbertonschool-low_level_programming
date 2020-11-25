#include "holberton.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: Address of memory to fill.
 * @b: Byte to be filled with.
 * @n: Number of bytes to fill within memory.
 * Return: The address of the memory to fill.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		s[idx] = b;
	}

	return (s);
}
