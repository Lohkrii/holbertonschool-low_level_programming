#include "holberton.h"

/**
 * check_prime - Checks for prime numbers.
 * @n: Is the prime number.
 * @x: Is the iterator.
 * Return: 0 if not prime, 1 if prime
 */

int check_prime(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);

	return (check_prime(n, x + 1));
}

/**
 * is_prime_number - Checks for prime number.
 * @n: Is the number in question.
 * Return: 1 for true, 0 for false.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (1);

	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
