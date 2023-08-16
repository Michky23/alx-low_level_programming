#include <stdio.h>

/**
  * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	long j = 1, b = 2, sum = b;

	while (b + j < 4000000)
	{
		b += j;

		if (b % 2 == 0)
			sum += b;

		j = b - j;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
