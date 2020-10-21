#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Writes function that concatonates 2 strings.
 * @s1: Contains the first string.
 * @s2: Contains the second string.
 * @n: Contains number of bytes for excersize complication.
 * Return: Returns the pointer to the adress that holds\
 * the concatonated string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx;
	unsigned int jdx;
	char *ptr;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		s1_length++;
	}
	for (idx = 0; s2[idx] != '\0'; idx++)
	{
		s2_length++;
	}
	s2_length++;
	if (n >= s2_length)
	{
		n = s2_length;
	}
	ptr = malloc(s1_length + n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (idx = 0; *(s1 + idx) != '\0'; idx++)
	{
		ptr[idx] = s1[idx];
	}
	for (jdx = 0; jdx <= n; jdx++)
	{
		ptr[idx + jdx] = s2[jdx];
	}
	return (ptr);
}
