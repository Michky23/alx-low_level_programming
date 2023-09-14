#include "variadic_functions.h"

/**
 * print_strings - function that print string passed to a function as parameter
 * @separator: is the string to be printed between the strings
 * @n:  is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int var;
	char *str;

	va_list ptr_strings;

	va_start(ptr_strings, n);

	for (var = 0; var < n; var++)
	{
		str = va_arg(ptr_strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (var != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr_strings);
}
