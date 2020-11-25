#include "holberton.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 * Return: The address of a string.
 */

char *leet(char *s)
{
	unsigned int idx, cidx;
	char cases[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replacement[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	idx = 0;
	while (s[idx] != '\0')
	{
		cidx = 0;
		while (cidx < 10)
		{
			if (s[idx] == cases[cidx])
				s[idx] = replacement[cidx];
			++cidx;
		}
		++idx;
	}
	return (s);
}
