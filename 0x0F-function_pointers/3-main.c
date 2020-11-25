#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of argv[1] and argv[3]
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if passed, 98 if a non logical
 * arithmetic symbol is used
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][0] != '+'
			&& argv[2][0] != '-'
			&& argv[2][0] != '*'
			&& argv[2][0] != '/'
			&& argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && argv[3][0] == '0')
			|| (argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);
	printf("%d\n", f(a, b));

	return (0);

}
