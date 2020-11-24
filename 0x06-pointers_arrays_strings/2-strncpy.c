#include "holberton.h"

/**
 * _strncpy - Copies a string to a destination.
 * @dest: Destination of the copied string.
 * @src: Source of the string to be copied.
 * @n: Size of bytes.
 * Return: The destination of the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx;

	for (idx = 0; src[idx] != '\0' && idx < n; idx++)
	{
		dest[idx] = src[idx];
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}
