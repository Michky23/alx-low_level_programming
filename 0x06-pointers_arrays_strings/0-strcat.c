#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int destleng = 0;
	int srcleng = 0;
	int a;

	for (a = 0 ; dest[a] != '\0' ; a++)
		destleng++;
	for (a = 0 ; src[a] != '\0' ; a++)
		srcleng++;
	for (a = 0 ; a <= srcleng ; a++)
		dest[destleng + a] = src[a];

	return (dest);
}
