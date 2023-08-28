#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: 2-dimensional array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int e, f;

	for (e = 0; e < 8; e++)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[e][f]);
		}
		_putchar('\n');
	}
}
