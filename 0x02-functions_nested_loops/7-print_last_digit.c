#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: is last digit value.
 *
 * Return: Returns the value of the last digit.
*/

int print_last_digit(int n)
{
	int ld = (n % 10);

	return (ld);
	_putchar('\n');
}
