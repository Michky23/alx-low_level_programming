#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int y = 0;
	unsigned int z = 0;
	int x = 1;
	int i = 0;

	while (s[y])
	{
		if (s[y] == 45)
		{
			x *= -1;
		}

		while (s[y] >= 48 && s[y] <= 57)
		{
			i = 1;
			z = (z * 10) + (s[y] - '0');
			y++;
		}

		if (i == 1)
		{
			break;
		}

		y++;
	}

	z *= x;
	return (z);
}
