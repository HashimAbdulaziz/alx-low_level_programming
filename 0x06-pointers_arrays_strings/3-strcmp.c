#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first input string
 * @s2: secind input string
 *
 * Return: number
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);

		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);

		if (s1[i] == '\0' && s2[i] == '\0')
			break;

		i++;
	}

	return (0);
}
