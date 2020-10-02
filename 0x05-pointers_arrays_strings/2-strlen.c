#include "holberton.h"

/**
 * _strlen - Returns the length of the string.
 *
 * @s: is the input string.
 *
 * Return: Returns length of string.
*/

int _strlen(char *s)
{
	char *ip = s;

	while (*ip != '\n')
	{
		ip++;
	}
	return (*ip);
}
