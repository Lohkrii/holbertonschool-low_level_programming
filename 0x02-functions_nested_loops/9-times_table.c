#include "holberton.h"

/**
 * times_table - Prints the 9's multiplications table from 0 to 9.
 */
void times_table(void)
{
	int first, second, last;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 10; second++)
		{
			if (second == 0)
			{
				_putchar(48);
				continue;
			}
			last = first * second;
			_putchar(',');
			_putchar(' ');
			if (last >= 10)
			{
				_putchar(last / 10 + 48);
				_putchar(last % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(last + 48);
			}
		}
		_putchar('\n');
	}
}
