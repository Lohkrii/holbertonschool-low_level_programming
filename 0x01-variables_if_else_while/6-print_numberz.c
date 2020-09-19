#include <stdio.h>

/**
 * main - Print all base 10 numbers (single digits)
 *
 * Return: Must be 0 to compute.
*/

int main(void)
{
	int x = '0';

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
