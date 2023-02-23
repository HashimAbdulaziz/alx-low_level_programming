#include"main.h"

/**
 * _isdigit - function checks if input is digit
 *
 * @c: inout char
 *
 * Return: 1 if c is digit and 0 elsewhere
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
