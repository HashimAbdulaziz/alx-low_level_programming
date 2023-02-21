#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}

/**
 * print_alphabet_x10 - function prints alphabets 10 times
 *
 * Return: nothing
 */


void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}
