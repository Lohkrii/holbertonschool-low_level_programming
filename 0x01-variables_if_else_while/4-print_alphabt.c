#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except for q & e
 *
 * Return: Must return 0 for success
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e') 
		{
		putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
