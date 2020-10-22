#ifndef function_pointers
#define function_pointers
/** Prints a name **/
void print_name(char *name, void (*f)(char *));

/** Executes a function given as a parameter on each element of an array. **/
void array_iterator(int *array, size_t size, void(*action)(int));
#endif /* Function_pointers */
