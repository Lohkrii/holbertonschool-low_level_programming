#include "holberton.h"

/**
 * _strstr - Locates a substring.
 * @haystack: String to search.
 * @needle: Substring to find.
 * Return: Returns pointer to beginning of the substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int idx, cidx;

	if (*needle == '\0')
		return (haystack);
	if (*needle == 0)
		return (haystack);

	for (idx = 0; haystack[idx] != '\0'; idx++)
	{
		cidx = 0;
		while (haystack[idx + cidx] == needle[cidx])
			cidx++;
		if (needle[cidx] == '\0')
			return (&haystack[idx]);
	}
	return ('\0');
}
