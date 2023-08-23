#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer ro an array
 * @n: the number of element in an array
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int b;
	int temp;

	n = n - 1;

	for (b = 0 ; b < n ; b++)
	{
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
		n--;
	}
}
