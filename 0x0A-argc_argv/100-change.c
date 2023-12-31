#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that print minimum number of coin to make change for money
 * @argc: the number of command line arg
 * @argv: an array that holds the command line arg
 * Return: (0)
 */

int main(int argc, char **argv)
{
	int cents, numcoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		numcoin += 1;
	}
	printf("%d\n", numcoin);
	return (0);
}
