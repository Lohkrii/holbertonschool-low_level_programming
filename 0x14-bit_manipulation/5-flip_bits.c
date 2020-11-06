#include "holberton.h"

/**
 * flip_bits - Returns the number of bits to flip to swtch number.
 * @n: Is the first number.
 * @m: Is the second number.
 * Return: Retruns the number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
		{
			count++;
		}
		n >>= 1;
	}
	return (count);
}
