#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed onto it.
 * @argc: counts the arguments.
 * @argv: Holds the arguments in array.
 * Return: Must be 0.
*/

int main(int argc, __attribute__((unused)) char **argv)
{
	int at = argc - 1;

	printf("%d\n", at);
	return (0);
}
