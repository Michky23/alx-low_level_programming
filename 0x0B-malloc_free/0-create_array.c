#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: the size of an array
 * @c: character to store in array
 * Return: pointer
 */

char *create_array(unsigned int size, char c)

{
	unsigned int b;

	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)

		return (NULL);

	for (b = 0; b < size; b++)
		ar[b] = c;
	return (ar);
}
