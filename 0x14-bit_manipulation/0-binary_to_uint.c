#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int.
 * @b: Is the binary number in question.
 * Return: Returns the unsigned int converted.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int exp = 0, i;
	int len;

	if (b == '\0')
	{
		return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
	}

	for (len = len - 1, i = 1; len >= 0; len--, i = i * 2)
	{
		if (b[len] == '1')
		{
			exp += i;
		}
	}
	return (exp);
}
