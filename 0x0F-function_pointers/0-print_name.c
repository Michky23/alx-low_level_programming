#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f: the variable to hold the string name
 * @name: the name of the person in string
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
