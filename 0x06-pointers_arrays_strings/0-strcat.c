#include "holberton.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination of the product string.
 * @src: Source of the strings to be concatonated.
 * Return: Returns the destination with the concatonated string.
 */

char *_strcat(char *dest, char *src)
{
	int idx, cidx;

	for (idx = 0; dest[idx] != '\0'; idx++)
		;

	for (cidx = 0; src[cidx] != '\0'; cidx++)
	{
		dest[idx + cidx] = src[cidx];
	}
	dest[idx + cidx] = '\0';
	return (dest);
}
