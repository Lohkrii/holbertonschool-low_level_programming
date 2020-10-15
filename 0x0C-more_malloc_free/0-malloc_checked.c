#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: Is the size of the array.
 * Return: Returns pointer to allocated memory. If Failed function should cause normal process termination with status value of 98.
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
