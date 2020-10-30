#include "lists.h"

/**
 *  - Prints a string before the main function executes.
 */

void preFuncMain (void) __attribute__ ((constructor));

void preFuncMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
