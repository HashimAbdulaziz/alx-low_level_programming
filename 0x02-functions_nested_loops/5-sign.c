#include "main.h"

/**
 * print_sign - function that checks the sign of number
 *
 * @r: sign input number
 *
 * Return: 1 if r is positive, 0 if r equal zero. -1 if r is negative
 */

int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
