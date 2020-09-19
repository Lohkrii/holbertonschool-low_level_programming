#include <stdio.h>

/**
 * main - Print alphabet in reverse.
 *
 * Return: Must be 0 to execute.
*/
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
