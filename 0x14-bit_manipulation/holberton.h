#ifndef holberton
#define holberton
#include <stdio.h>
/** Converts binary number to unsigned int **/
unsigned int binary_to_uint(const char *b);

/** Prints a binary representation of a number **/
void print_binary(unsigned long int n);

/** Returns the value of a bit at a given index **/
int get_bit(unsigned long int n, unsigned int index);

/** Sets the value of a bit to 1 at a given index **/
int set_bit(unsigned long int *n, unsigned int index);

/** Sets the value of a bit to 0 **/
int clear_bit(unsigned long int *n, unsigned int index);

/** Returns the number of bits needed to flip to reach a number **/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /** holberton.h **/
