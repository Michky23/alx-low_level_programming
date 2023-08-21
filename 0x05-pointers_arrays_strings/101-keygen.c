#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for 101-crackme.
 * Return: Always 0 (Success)
 */

int main(void)

{
	int sum;
	char a;

	srand(time(NULL));
	sum = 0;

	while (sum <= 2645)
	{
		a = rand() % 128;
		sum += a;
		putchar(a);
	}
	putchar(2772 - sum);

	return (0);
}
