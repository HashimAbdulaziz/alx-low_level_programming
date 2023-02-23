#include "main.h"

/**
 * print_diagonal - prints diagonla
 *
 * @n: lenght of diagonal
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
			_putchar(' ');

		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');

}
