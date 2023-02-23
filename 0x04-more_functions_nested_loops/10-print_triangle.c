#include "main.h"

/**
 * print_triangle - prints triangle of size
 *
 * @size: input size of triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
			_putchar(' ');

		for (k = 0; k < i + 1; k++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
