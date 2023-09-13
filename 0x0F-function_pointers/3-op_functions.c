#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the subtraction of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the multiplication of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the modulo of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
