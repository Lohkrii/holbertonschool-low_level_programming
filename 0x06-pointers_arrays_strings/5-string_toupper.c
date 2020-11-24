#include "holberton.h"

/**
 * string_toupper - Changes all lowercase characters in a string to uppercase.
 * @str: Is the string to be passed.
 * Return: Returns the manipulated string.
 */

char *string_toupper(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		idx++;
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] -= 32;
		}
	}
	return (str);
}
