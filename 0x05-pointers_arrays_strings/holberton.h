#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/* Prints char to screen */
int _putchar(char c);

/* Resets int to 98 */
void reset_to_98(int *n);

/* Swaps variable values */
void swap_int(int *a, int *b);

/* Returns the length of a string */
int _strlen(char *s);

/* Prints the string in question. */
void _puts(char *str);

/* Prints a string in reverse */
void print_rev(char *s);

/* Reverses a string */
void rev_string(char *s);

/* Prints every other character in a string */
void puts2(char *str);

/* Prints half of a string) */
void puts_half(char *str);

/* Prints n number of elements of a string */
void print_array(int *a, int n);

/* Copies a string into another destination */
char *_strcpy(char *dest, char *src);

/* Converts a string to number */
int _atoi(char *s);
#endif /* HOLBERTON */
