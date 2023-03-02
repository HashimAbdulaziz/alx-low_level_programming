#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: input string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == ' ' || s[i - 1] == '.'  ||
				s[i - 1] == '\n' || s[i - 1] == 9)
			s[i] = s[i] - 32;
		}

	}

	return (s);
}
