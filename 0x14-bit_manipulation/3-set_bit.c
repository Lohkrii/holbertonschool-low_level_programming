#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1.
 * @n: Is the value to change.
 * @index: is the indexed value.
 * Return: Returns 1 for success and -1 for failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	if (index > sizeof(index) * 8)
	{
		return (-1);
	}
	temp = temp << index;
	if ((temp & *n) == 0)
	{
		*n += temp;
	}
	return (1);
}
