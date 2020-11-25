#include "holberton.h"
/**
 * _strchr - locates the first character in a string
 * and returns a pointer to it
 * @s: string to look through
 * @c: Character to locate.
 * Return: The string or null if not found.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
