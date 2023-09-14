#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: is the number of argument to be passed to sum
 * Return: sum or (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int a;

	va_list arglist;

	va_start(arglist, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum = sum + va_arg(arglist, const unsigned int);
		}
	}
	va_end(arglist);

	return (sum);
}
