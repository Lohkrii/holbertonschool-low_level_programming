#include "function_pointers.h"

/**
 * main - Prints the opcodes of its own function.
 * @argc: Argument ammount.
 * @argv: Argument array.
 * Return: 0 for success or else for Error.
 */

int main(int argc, char *argv[])
{
	int opcode;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}
	opcode = atoi(argv[1]);
	if (opcode < 0)
	{
		printf("Error\n"), exit(2);
	}
	return (0);
}
