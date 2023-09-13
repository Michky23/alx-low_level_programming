#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - program that prints the opcodes of its own main function
 * @a: the address of the main function
 * @n: the number of bytes to print
 *
 * Return: void
**/
void print_opcodes(char *a, int n)
{
int k;

for (k = 0; k < n; k++)
{
printf("%.2hhx", a[k]);
if (k < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
int n;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, n);
return (0);
}
