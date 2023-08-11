#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	for (k = '0'; k <= '9'; k++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (!((i == j) || (j == k) || (j > i) || (k > i)))
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (!(i == '9' && k == '7' && j == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
