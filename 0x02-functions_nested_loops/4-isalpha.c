#include "holberton.h"

/**
 * _isalpha - Check if c is an alphabetic character.
 *
 * Return: If 1, c = Alphabetic character.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
