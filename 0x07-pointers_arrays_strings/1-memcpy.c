#include "holberton.h"

/**
 * _memcpy - Copies memory of an address.
 * @dest: Destination of copied address.
 * @src: Address to copy.
 * @n: Amount of bytes to copy.
 * Return: Address of destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
