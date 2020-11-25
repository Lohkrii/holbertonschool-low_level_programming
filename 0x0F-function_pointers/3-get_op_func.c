#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - checks all the op data stuctures against
 * the s string for a match, returns function if matched,
 * return NULL if not
 * @s: character to check
 *
 * Return: function pointer
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
