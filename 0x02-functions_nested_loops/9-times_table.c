#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table,
 *starting with 0.
 *
 * Return: nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) >= 10)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
				_putchar((i * j) + '0');

			if (!(j == 9))
			{
				if ((i * (j + 1)) < 10)
				{
					_putchar(',');
i					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		 _putchar('\n');
	}
}
