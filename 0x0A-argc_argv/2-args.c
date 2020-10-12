#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints all arguments recieved.
 * @argc: Counts arguments.
 * @argv: Holds arguments in array form.
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
