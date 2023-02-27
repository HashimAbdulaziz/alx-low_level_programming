#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: first input pointer
 * @b: second input pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
