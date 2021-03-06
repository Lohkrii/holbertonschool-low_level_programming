#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints string with generated number and last digit of that number
 *
 * Return: Must return 0
*/
int main(void)
{
	int n;
	int lD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lD = n % 10;
	printf("Last digit of %d is %d ", n, lD);
	if (lD == 0)
	{
	printf("and is 0\n");
	}
	else if (lD < 6)
	{
	printf("and is less than 6 and not 0\n");
	}
	else if (lD > 5)
	{
	printf("and is greater than 5\n");
	}
	return (0);
}
