#include "holberton.h"

/**
 * clear_bit - Sets the value to a bit to 0.
 * @n: Is the bit in question.
 * @index: Is the Indexed bit number.
 * Return: 1 for success, -1 for error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	if (index > sizeof(index) * 8)
	{
		return (-1);
	}
	temp = temp << index;
	*n &= ~temp;
	return (1);
}
