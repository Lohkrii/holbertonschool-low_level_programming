#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatonates two strings.
 * @s1: First string to be allocated.
 * @s2: String to append.
 * @n: First n bytes in between.
 * Return: If Null Malloc Failed. Returns pointer to string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx, cidx = 0, s1_len = 0, s2_len = 0;
	char *strcnct;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (idx = 0; s1[idx] != '\0'; idx++, s1_len++)
		;
	for (idx = 0; s2[idx] != '\0'; idx++, s2_len++)
		;
	if (n >= s2_len)
	{
		n = s2_len;
	}
	strcnct = malloc(s1_len + n + 1);
	if (strcnct == NULL)
	{
		return (NULL);
	}
	for (idx = 0; idx < s1_len; idx++)
	{
		strcnct[idx] = s1[idx];
	}
	while (cidx < n)
	{
		strcnct[idx + cidx] = s2[cidx];
		cidx = cidx + 1;
	}
	strcnct[idx + cidx] = '\0';
	return (strcnct);
}
