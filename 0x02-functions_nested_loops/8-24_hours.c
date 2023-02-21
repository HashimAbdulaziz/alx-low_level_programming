#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute of the day,
 *	from 00:00 to 23:59.
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h != 24)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');

		m = m + 1;

		if (m == 60)
		{
			m = 0;
			h = h + 1;
		}
	}
}
