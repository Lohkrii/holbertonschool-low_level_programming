#include "holberton.h"

/**
 * reset_to_98 - Resents input variable to 98.
 *
 * @n: is the input variable.
*/

void reset_to_98(int *n)
{
	int *ip = &*n;

	*ip = 98;
}
