#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program should print the result of the multiplication.
 * @argc: the number of command line arg.
 * @argv: an array that contains the command line arg.
 * Return: (0)
 */

int main(int argc, char *argv[])

{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
