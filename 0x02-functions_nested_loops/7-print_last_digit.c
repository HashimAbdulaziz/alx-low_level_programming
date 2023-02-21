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
	_putchar((n % 10) + '0');
	return (n % 10);
}
