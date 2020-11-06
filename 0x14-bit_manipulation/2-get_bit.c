#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: is the Number in question.
 * @index: Is the bit location.
 * Return: Returns value of bit, or -1 for error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
