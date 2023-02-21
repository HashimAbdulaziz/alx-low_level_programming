#include "holberton.h"

/**
 * _isalpha - a function that checks if character is alphabet
 *
 * @c: single letter input
 *
 * Return: 1 if int c is alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
