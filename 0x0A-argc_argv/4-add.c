#include "holberton.h"

/**
 * check_arguments - Verifies positive number.
 * @arg_v: String in question.
 * Return: Returns 1 for true, 0 for false.
 */

int check_arguments(char *arg_v)
{
	unsigned int idx;

	for (idx = 0; arg_v[idx] != '\0'; idx++)
	{
		if (arg_v[idx] == '-')
			idx++;
		if (!(arg_v[idx] >= '0' && arg_v[idx] <= '9'))
		{
			printf("Error\n");
			return (0);
		}
	}
	return (1);
}

/**
 * main - Adds all arguments that are numbers and prints sum
 * @argc: argument count
 * @argv: argument vector
 * Return: Returns 0 if a number, 1 if failed.
 */

int main(int argc, char *argv[])
{
	int idx, sum;

	for (idx = 1, sum = 0; idx < argc;)
	{
		if (check_arguments(argv[idx]))
		{
			sum += atoi(argv[idx]);
			idx++;
		}
		else
		{
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
