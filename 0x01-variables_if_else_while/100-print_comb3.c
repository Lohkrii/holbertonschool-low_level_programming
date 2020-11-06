#include <stdio.h>

/**
 * main - Prints to standard output all possible combinations of 2 digits.
 * Return: Returns 0 for success.
 */

int main(void)
{
	int first, second;

	for (first = 0; first < 10; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			if ((first * 10 + second) < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
