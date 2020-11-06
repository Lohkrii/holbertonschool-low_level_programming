#include <stdio.h>

/**
 * main - Prints all possible combinations of 3 digits.
 * Return: 0 for success.
 */
int main(void)
{
	int first_digit, second_digit, third_digit;

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
		{
			for (third_digit = second_digit + 1; third_digit < 10; third_digit++)
			{
				putchar(first_digit + '0');
				putchar(second_digit + '0');
				putchar(third_digit + '0');
				if ((first_digit * 100 + second_digit * 10 + third_digit) < 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
