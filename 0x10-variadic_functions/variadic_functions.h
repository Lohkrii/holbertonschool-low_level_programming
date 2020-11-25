#ifndef variadic_functions
#define variadic_functions

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/** Sums the passed arguments. **/
int sum_them_all(const unsigned int n, ...);

/** Prints numbers and separates them. **/
void print_numbers(const char *separator, const unsigned int n, ...);

/** Prints strings in arguments separated by format. **/
void print_strings(const char *separator, const unsigned int n, ...);

/** Inputs a singular character **/
int _putchar(char x);

void print_all(const char * const format, ...);
#endif /** variadic_functions **/
