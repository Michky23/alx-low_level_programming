#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of byte to concatenates
 * Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int leng = strlen(dest);
	int a;

	for (a = 0 ; a < n && *src != '\0' ; a++)
	{
		dest[leng + a] = *src;
		src++;
	}
	dest[leng + a] = '\0';
	return (dest);
}
