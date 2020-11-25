
#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string in question.
 * @accept: the string check against s
 * Return: number of single occurances beteween each string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, idx, cidx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (cidx = 0; accept[cidx] != '\0'; cidx++)
		{
			if (s[idx] == accept[cidx])
			{
				count++;
				break;
			}
			if (accept[cidx + 1] == '\0' && s[idx] != accept[cidx])
				return (count);
		}
	}

	return (count);
}
