#include "lists.h"

/**
 *  preFuncMain - Prints a string before the main function executes.
 */
void preFuncMain(void)__attribute__((constructor));
void preFuncMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
