#include <stdio.h>

/**
 * main - Prints from 0 - 100 fizz for 3/
 * buzz for 5/ fizzbuzz for 3&5 divisible.
 * Return: Always 0
 */

int main(void)
{
	int idx;

	for (idx = 1; idx <= 100; idx++)
	{
		if (idx % 3 == 0)
			printf("Fizz");
		else if (idx % 5 == 0)
			printf("Buzz");
		else if (idx % 3 == 0 && idx % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", idx);
		if (idx < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
