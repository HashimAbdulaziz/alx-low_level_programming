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
	char c = 'a';

	while (c != '{')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c = c + 1;
	}

	putchar('\n');

	return (0);
}
