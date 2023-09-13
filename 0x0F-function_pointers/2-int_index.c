#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the target array that search for an int
 * @size: the number of element in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the elemnt of cmp, if no elemet match -1 if size <=0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}
	return (-1);
}
