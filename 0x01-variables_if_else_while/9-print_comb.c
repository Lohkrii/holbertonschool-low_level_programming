#include <stdio.h>

/**
 * main - Prints all possible combinations of a single-deigit number.
 *
 * Return: Must be 0 to be able to execute.
*/

int main(void)
{
	int x = '0';

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
