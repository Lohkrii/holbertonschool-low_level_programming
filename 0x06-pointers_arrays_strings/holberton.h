#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Concatonates 2 strings */
char *_strcat(char *dest, char *src);

/* Concatonates 2 strings */
char *_strncat(char *dest, char *src, int n);

/* Copies a string */
char *_strncpy(char *dest, char *src, int n);

/* Compares 2 strings */
int _strcmp(char *s1, char *s2);

/* Reverses the content of an array of ints */
void reverse_array(int *a, int n);

/* Changes lowercase to uppercase */
char *string_toupper(char *);

/* Capitalizes all words of a string */
char *cap_string(char *);

/* Ecodes a string into 1337 */
char *leet(char *);

/* Encodes a string using rot13 */
char *rot13(char *c);

/* Prints an int */
void print_number(int n);


#endif /* HOLBERTON_H */
