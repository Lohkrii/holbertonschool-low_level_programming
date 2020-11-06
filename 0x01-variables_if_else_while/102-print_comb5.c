#include <stdio.h>

/**
 * main - Prints all unique possible combinations of two two-digit numbers.
 * Return: alway 0
 */
int main(void)
{
	int first, second, third, fourth, final_1, final_2;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 10; second++)
		{
			for (third = first; third < 10; third++)
			{
				for (fourth = 0 ; fourth < 10; fourth++)
				{
					final_1 = first * 10 + second;
					final_2 = third * 10 + fourth;
					if (final_2 > final_1)
					{
					putchar(first + '0');
					putchar(second + '0');
					putchar(' ');
					putchar(third + '0');
					putchar(fourth + '0');
					if (!((final_1 == 98) && (final_2 == 99)))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
