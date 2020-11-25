#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* Copies a memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Locates a specific character in a string */
char *_strchr(char *s, char c);

/* Gets the lentgth of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* Searches a string for any set of bytes */
char *_strpbrk(char *s, char *accept);

/* Locates a substring */
char *_strstr(char *haystack, char *needle);

/* Prints the chessboard */
void print_chessboard(char (*a)[8]);

/* Prints the sum of two diagonals of a square matrix of ints */
void print_diagsums(int *a, int size);

/* Sets the value of a pointer to a char */
void set_string(char **s, char *to);

/* Prints a single char */
int _putchar(char c);
#endif /* HOLBERTON_H */
