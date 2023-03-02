#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 *
 * @s: input string
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}

