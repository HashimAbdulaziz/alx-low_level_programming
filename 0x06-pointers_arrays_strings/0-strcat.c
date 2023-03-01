#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: first string input.
 * @src: second string input.
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	char *end = dest;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		end++;

	for (i = 0; src[i] != '\0'; i++)
	{
		*end = src[i];
		end++;
	}

	return (dest);
}
