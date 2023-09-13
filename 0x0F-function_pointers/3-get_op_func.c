#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s: operator argument
 *
 * Return: pointer to the function op_add if s does nt match return NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k = 0;

	while (ops[k].op != NULL && *(ops[k].op) != *s)
		k++;

	return (ops[k].f);
}
