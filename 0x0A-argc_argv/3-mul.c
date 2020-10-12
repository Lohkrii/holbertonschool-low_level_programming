#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies 2 numbers.
 * @argc: Counts arguments.
 * @argv: Holds arguments in array.
 * Return: Must return 0:
*/

int main(int argc, char **argv)
{
	int prdt = 1;
	int idx;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for(idx = 1; idx < argc; idx++)
	{
		prdt *= atoi(argv[idx]);
	}
	printf("%d\n", prdt);
	return (0);
}
