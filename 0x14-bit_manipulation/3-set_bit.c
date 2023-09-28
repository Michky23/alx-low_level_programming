#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: the number of pointer to the bit to be manipulated
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	val = 1;
	val = val << index;
	*n = ((*n) | val);
	return (1);
}
