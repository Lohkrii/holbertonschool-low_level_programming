#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the programs name.
 * @argc: contains the count of arguments
 * @argv: contains the arguments in an array setting.
 * Return: Must be 0.
*/

int main(int argc, char **argv)
{
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
		printf("%s\n", argv[idx]);
	}
		return (0);
}
