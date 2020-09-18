#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 stating from 0
 *
 * Return: Must return 0 for compliance
*/

int main(void)
{
	char y = '0';
	int x = y;

	for (x = 0; x <= 9; x++)
	{
	printf("%d", x);
	}
	printf("\n");
	return (0);
}
