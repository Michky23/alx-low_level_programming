#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: the number of command line argument.
 * @argv: an array that contains the program command line arg.
 * Return: (0)
 */

int main(int argc, char *argv[])

{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
