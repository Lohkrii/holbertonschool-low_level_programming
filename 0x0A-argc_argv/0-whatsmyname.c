#include "holberton.h"
#include <stdio.h>

/**
 *
 *
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
