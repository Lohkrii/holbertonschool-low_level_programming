#include "holberton.h"

/**
 * _strncat - Concatonates 2 strings.
 * @dest: Is the destination we are going to copy to.
 * @src: Source of what we are copying.
 * @n: Number of bytes in src.
 * Return: Returns the destination of the concatonated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int idx, cidx;

	for (idx = 0; dest[idx] != '\0'; idx++)
	;

	for (cidx = 0; *(src + cidx) != '\0' && n > 0; cidx++, n--)
	{
		dest[idx + cidx] = src[cidx];
	}
	dest[idx + cidx] = '\0';
	return (dest);
}
