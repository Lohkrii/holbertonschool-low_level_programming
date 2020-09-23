#include "holberton.h"

/**
 * _islower(int c) - checks for lowercase character.
 *
 * @c: Outside input variable.
 *
 * Return: Returns 1 if c is lowercase, returns 0 if otherwise.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
