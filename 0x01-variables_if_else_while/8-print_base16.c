#include <stdio.h>

/**
 * main - Return all base 16 numbers in lowercase.
 *
 * Return: Must return 0 to execute.
*/

int main(void)
{
	char x;
	char y;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
	putchar(y);
	}
	putchar('\n');
	return (0);
}
