#ifndef holberton_h
#define holberton_h

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/** Prints a singled character **/
int _putchar(char c);

/** Reads text and prints int **/
ssize_t read_textfile(const char *filename, size_t letters);

/** Create a function that creates a file **/
int create_file(const char *filename, char *text_content);

/** Appends text at the end of a file **/
int append_text_to_file(const char *filename, char *text_content);

/** Copies the content of a file to another file **/

#endif /** holberton **/
