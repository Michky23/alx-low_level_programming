#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: function parameters for lower and uppercase
 * Return: Always (1) and (0)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
