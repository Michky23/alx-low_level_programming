#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: the character pointer to a string
 *
 * Return: the converted number, or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	size_t e = 0;
	size_t f = 0;
	size_t mult = 0;
	size_t conv = 1;
	int width = 2;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (e = 0; b[e] != '\0'; e++)
	{
		if (b[e] != '0' && b[e] != '1')
		return (0);
		for (f = length - 1; f > 0; f--)
		conv = conv * width;
		mult = mult + (conv * (b[e] - 48));
		length--;
		conv = 1;
	}
	return (mult);
}
