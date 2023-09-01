#include <stdio.h>
/**
 * main - a program that print its name, followed by a new line.
 * @argc: a number of command line arguments.
 * @argv: an array that contains the command line arguments.
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
