#include "variadic_functions.h"

/**
 * print_numbers - functions that print (numnber)integers
 * @separator: is the string to be printed between numbers
 * @n: the number of integers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int a, array;

	va_list ptrs;

	va_start(ptrs, n);

	for (a = 0; a < n; a++)
	{
		array = va_arg(ptrs, const unsigned int);
		printf("%d", array);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptrs);
}
