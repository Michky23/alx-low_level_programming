#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: A pointer to a pointer
 * @to: pointer char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
