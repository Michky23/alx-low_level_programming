#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: former pointer to the old memory allocated
 * @old_size: the old size allocated by malloc in the heap
 * @new_size: the new size allocated by the _realloc function
 * Return: pointer to the newly allocated memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	size_t a, max = new_size;
	char *oldpoint = ptr;

	if (ptr == NULL)
	{
		point = malloc(new_size);
			return (point);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	point = malloc(new_size);
		if (point == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		point[a] = oldpoint[a];
	free(ptr);
	return (point);
}
