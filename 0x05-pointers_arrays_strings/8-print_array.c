#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array that will be printed
 * @n: numbers of element that will be printed
 * Return: void
 */

void print_array(int *a, int n)

{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
