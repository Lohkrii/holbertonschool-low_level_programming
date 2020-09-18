#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase letters
 *
 * Return: Must return 0 for success
*/

int main(void)
{
	char x;
	char X;

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
	for (X = 'A'; X <= 'Z'; X++)
	{
	putchar(X);
	}
	putchar('\n');
	return (0);
}
