#include "main.h"
#include <stdio.h>
/**
 * rot13 - a function that encodes a string with rot13
 *
 * @str: the string input
 *
 * Return: string out
 */
char *rot13(char *str)
{
	int a, b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWZYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (str[a] == c[b])
			{
				str[a] = d[b];
				break;
			}
		}
	}

	return (str);
}
