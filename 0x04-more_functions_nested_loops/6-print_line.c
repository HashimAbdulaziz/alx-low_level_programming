#include "main.h"

/**
 * print_line - function prints line
 *
 * @n: line lenght
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}

