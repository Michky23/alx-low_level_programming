#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main block
 * description: prints the first 98 Fibonacci numbers
 * Number should be coma and space separated
 * Return: 0
 */

int main(void)

{
	unsigned long int a = 0, e = 1, b = 0, f = 2;
	unsigned long int i, j, k;
	int count;

	printf("%lu, %lu,", e, f);
	for (count = 2 ; count < 98 ; count++)
	{
		if (e + f > LARGEST || b > 0 || a > 0)
		{
			i = (e + f) / LARGEST;
			j = (e + f) % LARGEST;
			k = a + b + i;
			a = b, b = k;
			e = f, f = j;
			printf("%lu %010lu", b, f);
		}
		else
		{
			j = e + f;
			e = f, f = j;
			printf("%lu", f);
		}
		if (count != 97)
			printf(",");
	}
	printf("\n");
	return (0);
}
