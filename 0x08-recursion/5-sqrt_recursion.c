#include "main.h"

/**
 * sqrt_k - to return the natural square of a number
 * @i: input
 * @j: the iterator
 * Return: square root or -1
 */

int sqrt_k(int i, int j)

{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	else
	{
		return (sqrt_k(i, j + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_k(n, 0));
}
