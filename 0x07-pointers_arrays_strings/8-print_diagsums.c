#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: 2d array of int type
 * @size: size of the array (square)
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		j = j + a[i];
		k = k + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", j);
	printf("%d\n", k);
}
