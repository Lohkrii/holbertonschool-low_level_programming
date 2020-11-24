#include "holberton.h"
/**
 * _strcmp - Compares 2 diferrent strings char by char.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 * Return: 0 for true, else for false.
 */

int _strcmp(char *s1, char *s2)
{
	int idx, cidx;

	for (idx = 0; s1[idx] != '\0' && s2[idx] != '\0'; idx++)
	{
		cidx = s1[idx] - s2[idx];
		if (cidx != 0)
		{
			return (cidx);
		}
	}
	cidx = s1[idx] - s2[idx];
	return (cidx);
}
