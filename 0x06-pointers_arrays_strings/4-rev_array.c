#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers.
 *
 * @a: array input
 * @n: length of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int *end = a + n - 1, *start = a, len = 0, i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
