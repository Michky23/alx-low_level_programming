#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: the parameter array
 * @size: the size of the array
 * @action: pointer to the function array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(*array);
		array = array + 1;
	}
}
