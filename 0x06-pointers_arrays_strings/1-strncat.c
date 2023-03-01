#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 *
 * @dest: first input string
 * @src: second input string
 * @n: input number
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		end++;

	for (i = 0; src[i] != '\0'; i++)
		;

	if (i > n)
		i = n;

	for (j = 0; j < i; j++)
	{
		*end = src[j];
		end++;
	}

	return (dest);
}
