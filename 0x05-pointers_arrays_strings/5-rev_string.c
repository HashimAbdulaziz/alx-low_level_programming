#include "main.h"

/**
 * rev_string - function
 * that prints a string, in reverse, followed by a new line
 *
 * @s: input string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, len;
	char *begin = s, *end = s;

	for (i = 0; s[i + 1] != '\0'; i++)
		end++;

	len = i + 1;

	for (i = 0; i < len / 2; i++)
	{
		char tmp;

		tmp = *end;
		*end = *begin;
		*begin = tmp;
		end--;
		begin++;
	}
}
