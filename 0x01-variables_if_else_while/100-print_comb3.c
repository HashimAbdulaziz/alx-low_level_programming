#include<stdio.h>

/**
 * main - print combinations
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		int j;

		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (!(j == 57 && i == 56))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
