#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of byte to copy
 * Return: resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int a;

	for (a = 0 ; a < n && src[a] != '\0' ; a++)

	dest[a] = src[a];

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
