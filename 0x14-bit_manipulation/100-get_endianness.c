#include "holberton.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0 if Big, 1 if little.
 */

int get_endianness(void)
{
	unsigned int x = 1;

	return ((int) (((char *)&x)[0]));
}
