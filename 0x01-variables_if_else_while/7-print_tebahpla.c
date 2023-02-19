#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - get last digit.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c = 'z';

	while (c != 96)
	{
		putchar(c);
		c = c - 1;
	}

	putchar('\n');

	return (0);
}
