#include "main.h"

/**
 * print_last_digit - function prints last digir of the number
 *
 * @n: input number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int l;

	l = (n % 10);

	if (l < 0)
	{
		l = (-1 * l);
	}

	_putchar(l + '0');
	return (l);
}
