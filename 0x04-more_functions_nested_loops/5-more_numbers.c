#include "holberton.h"

/**
 * more_numbers - Prints 10 times, the numbers 0-14.
 *
 * Return: Returns numbers.
*/

void more_numbers(void)
{
	int singledigit;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (singledigit = 0; singledigit <= 14; singledigit++)
		{
			if (singledigit > 9)
			{
				_putchar(singledigit / 10 + '0');
			}
			_putchar(singledigit % 10 + '0');
		}
		_putchar('\n');
	}
}
