#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: the number of comman line argument
 * @argv: an array that contains the program command line arg.
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
