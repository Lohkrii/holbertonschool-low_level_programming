#include <stdlib.h>
#include <stdio.h>
#ifndef Name
#define Name ("2-main.c")
#endif /** Name **/
/**
 * main - prints the name of the file it was compiled from.
 * Return: Returns 0.
*/

int main(void)
{
	printf("%s\n", Name);
	return (0);
}
