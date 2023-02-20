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

		for (j = i + 1; j < 57; j++)
		{
			int k;

			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (!(j == 56 && i == 56 && k == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
