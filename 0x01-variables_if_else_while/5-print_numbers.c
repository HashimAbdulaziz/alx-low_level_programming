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
	int c = 0;

	while (c != 10)
	{
		printf("%d", c);
		c = c + 1;
	}

	putchar('\n');

	return (0);
}
