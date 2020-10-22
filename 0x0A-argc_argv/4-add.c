#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Prints the addition of positive numbers.
 * @argc: Counts the ammount of arguments passed.
 * @argv: Holds arguments in array form.
*/

int main(int argc, char **argv)
{
	int scn;
	int idx;
	int sum;

	for (scn = 1; scn < *argv; scn++)
	{
		if (*argv[scn] < '0' || *argv[scn] > '9')
		{
			printf("%d\n", 0);
			return (0);
		}
		else if ((*argv[scn] <= 'a' && *argv[scn] >= 'z') || (*argv[scn] <= 'A' && *argv[scn] >= 'Z'))
		{
			printf("Error");
			return (1);
		}
	}
	for (idx = 1; idx < argc; idx++)
	{
		sum *= atoi(argv[idx]);
	}
	printf("%d\n", sum);
	return (0);
}
