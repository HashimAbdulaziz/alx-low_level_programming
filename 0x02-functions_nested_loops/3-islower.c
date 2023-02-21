#include "main.h"

/**
 * _islower - function that checks if character is lower case or not
 *
 * @c: single letter input
 *
 * Return: 1 (if c is lower) or 0 (if c is upper)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
