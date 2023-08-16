#include <stdio.h>

/**
  * main function - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */

int main(void)
{
	int i, k = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			k += i;
		}

		i++;
	}

	printf("%d\n", k);
	return (0);
}
