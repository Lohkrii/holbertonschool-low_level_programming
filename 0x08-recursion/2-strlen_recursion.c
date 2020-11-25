#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String in question.
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	unsigned int count = 1;

	if (*s == '\0')
		return (0);

	return (count + _strlen_recursion(s + 1));
}
