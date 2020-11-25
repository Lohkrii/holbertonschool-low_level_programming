#include "holberton.h"
/**
 * _strpbrk - Searches string for a specific set of bytes.
 * @s: The string to be searched.
 * @accept: The string to compare.
 * Return: Returns S if match, Null for failure to locate.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int idx, cidx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (cidx = 0; accept[cidx] != '\0'; cidx++)
		{
			if (s[idx] == accept[cidx])
			{
				s = &s[idx];
				return (s);
			}
		}
	}
	return (0);
}
