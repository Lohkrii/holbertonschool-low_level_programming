#include <stdio.h>

/**
 * main - Prints the numbers 00 to 99.
 *
 * Return: Must be 0 to execute.
*/

int main(void)
{
	int x = '0';

	for (x = 0; x <= 100; x++)
	{
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
