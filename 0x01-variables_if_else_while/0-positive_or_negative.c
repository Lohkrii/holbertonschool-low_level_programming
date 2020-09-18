#include <stdlib.h>
#include <time.h>

/**
 * main - Loops int n and prints answer.
 *
 * Return: returns 0 for success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("%u is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%u is negative\n", n);
	}
	else if (n > 0)
	{
	printf("%u is positive\n", n);
	}
	return (0);
}
