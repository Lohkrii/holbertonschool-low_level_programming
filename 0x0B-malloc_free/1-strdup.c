#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: String to be duplicated.
 * Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int idx, size;
	char *m;

	if (str == NULL)
		return (NULL);
	for (idx = 0; str[idx] != '\0'; idx++)
		;
	size = idx;

	m = malloc(sizeof(char) * (size + 1));

	if (m == NULL)
		return (NULL);
	for (idx = 0; idx < size; idx++)
	{
		m[idx] = str[idx];
	}
	m[size] = '\0';
	return (m);
}
