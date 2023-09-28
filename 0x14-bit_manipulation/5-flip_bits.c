#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: the first number to flip
 * @m: the second number to flip
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value;
	unsigned long int increase;

	value = n ^ m;
	for (increase = 0;value > 0;)
	{
		if ((value & 1) == 1)
			increase++;
		value = value >> 1;
	}
	return (increase);
}
