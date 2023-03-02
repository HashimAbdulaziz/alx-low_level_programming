#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: first input string
 * @src: second input string
 * @n: number of copied char
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *end = dest;
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;

	for (j = 0; j < n; j++)
	{
		if (j > i)
			*end = '\0';
		else
			*end = src[j];
		end++;
	}

	return (dest);
}
