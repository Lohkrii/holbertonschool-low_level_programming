#include "holberton.h"

/**
 * print_times_table(int n);
 * @n: If n is 15 or less than 0 dont print.
 */

void print_times_table(int n)
{
	int x, y, temp;

	if (n >= 15 || n <= 0)
	{
		return;
	}
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			temp = (x * y);
			if (temp >= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(temp / 100 + '0');
				temp = temp - (temp / 100) * 100;
				_putchar((temp / 10) + '0');
				_putchar((temp % 10) + '0');
			}
			else if (temp > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((temp / 10) + '0');
				_putchar((temp % 10) + '0');
			}
			else if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(temp +'0');
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
