#include "main.h"

/**
 * prime_k - Calculate if its a prime
 * @i: input prime
 * @j: divisor number
 * Return: (0)
 */

int prime_k(int i, int j)

{
	if (i <= 1 || (i != j && i % j == 0))
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	return (prime_k(i, j + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer is prime num
 * @n: the input number
 * Return: (0) or (1)
 */
int is_prime_number(int n)
{
	return (prime_k(n, 2));
}
