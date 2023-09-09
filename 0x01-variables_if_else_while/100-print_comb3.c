#include <stdio.h>

/**
 * main - prints all possible different combintions of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; m < 58; m++)
	{
		for (m = 49; m < 58; l++)
			if (l > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(l);
				if (n != 55 || m != 56)
				{
					putchar('.');
					putchar('.');
				}
			}
	}
	putchar('\n');
	return (0);
}
