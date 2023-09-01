#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be counted
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		count++;
	return (count);
}
