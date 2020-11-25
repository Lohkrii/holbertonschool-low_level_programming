#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor.
 * Return: Always return 0. (For execution)
 */

int main(void)
{
	int idx;
	long int num = 612852475143;

	for (idx = 2; idx < num;)
	{
		if (num % idx == 0)
			num = num / idx;
		else
			if (!(num % idx == 0))
			{
				idx++;
			}
	}
	printf("%ld\n", num);
	return (0);
}
