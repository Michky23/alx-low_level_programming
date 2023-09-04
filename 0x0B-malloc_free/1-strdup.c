#include "main.h"
#include "stdlib.h"

/**
 * _strdup - function that returns pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: initial input string
 * Return: NULL
 */
char *_strdup(char *str)
{
	size_t a, b;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	strdout = (char *)malloc(sizeof(char) * (a + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		strdout[b] = str[b];
	}
	return (strdout);


}
