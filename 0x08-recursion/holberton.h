#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/* Prints the inputted text. */
int _putchar(char c);

/* Prints a string recursively. */
void _puts_recursion(char *s);

/* Prints a string in reverse */
void _print_rev_recursion(char *s);

/* Returns the length of a string */
int _strlen_recursion(char *s);

/* Returns the factorial of a given number */
int factorial(int n);

/* Returns the value of x raised to the power of y */
int _pow_recursion(int x, int y);

/* Returns the natural square root of a number */
int _sqrt_recursion(int n);

/* Returns 1 if input integer is a prime number or 0 for false */
int is_prime_number(int n);

/* Returns 1 if string is a palindrome and 0 if false */
int is_palindrome(char *s);

/* Compares 2 strings */
int wildcmp(char *s1, char *s2);
#endif /* HOLBERTON_H */
