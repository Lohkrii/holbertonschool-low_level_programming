#include "holberton.h"

/**
 * cap_string - Capitalizes all lower case characters in a string.
 * @s: The string to be manipulated.
 * Return: The capitalized String
 */

char *cap_string(char *s)
{
	int idx;
	int cidx;
	char char_array[] = {32, '\t', '\n', 43, 33, 34, 40, 41,
		59, 63, 46, 123, 125};

	for (idx = 0; s[idx]; idx++)
	{
		if (s[idx] >= 'a' && s[idx] <= 'z')
		{
			if (idx == 0)
				s[idx] -= 32;
			for (cidx = 0; char_array[cidx] != '\0'; cidx++)
			{
				if (char_array[cidx] == s[idx - 1])
				{
					s[idx] -= 32;
					break;
				}
			}
		}
	}
	return (s);
}
