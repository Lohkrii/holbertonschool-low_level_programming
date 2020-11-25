#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String in question.
 * Return: Returns the length of a string.
 */

int _strlen_recursion(char *s)
{
	unsigned int count = 1;

	if (*s == '\0')
		return (0);

	return (count + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Checks for a palindrome.
 * @s: Pointer to string.
 * @len: Length of string - 1.
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int len)
{
	if (*(s + 1) == '\0')
		return (1);

	if (*s != *(s + len))
		return (0);

	return (check_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - Checks for a palindrome
 * @s: String in question.
 * Return: The answer from check_palindrome.
 */

int is_palindrome(char *s)
{
	unsigned int len = _strlen_recursion(s) - 1;

	if (*s == '\0')
		return (1);

	return (check_palindrome(s, len));
}
