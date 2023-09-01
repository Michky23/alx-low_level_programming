#include "main.h"

/**
 * _memcpy - this is a function that copies memory area
 * @src: the memory to be copied to dest
 * @dest: the memory where copied memory that be stored
 * @n: the number of byte stored
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
