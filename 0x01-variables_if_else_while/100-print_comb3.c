#include<stdio.h>

/**
 * main - print combinations
 *
 * Return: Always 0.
 */

int main(void)
{
	for (int i = 48; i < 57; i++)
	{
		for (int j = i + 1; j <= 57; j++)
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
