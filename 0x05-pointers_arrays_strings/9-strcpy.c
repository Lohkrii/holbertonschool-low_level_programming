#include "holberton.h"

/**
 * _strcpy - Copies a string from one array into another.
 * @dest: Is the destination of the copied string.
 * @src: Is the source of the string being copied.
 * Return: Returns the pointer to the destiation variable.
*/

char *_strcpy(char *dest, char *src)
{
	size_t idx;

	for (idx = 0; src[idx] != '\0'; idx++)
	{
		dest[idx] = src[idx];
	}
	dest[idx] = '\0';
	return (dest);
}
