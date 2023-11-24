#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int check_end = 1;
	int big_little;

	big_little = (int) (((char *)&check_end)[0]);
	return (big_little);
}
