#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	long x, mx;
	long number = 612852475143;
	double sq = sqrt(number);

	for (x = 1; x <= sq; x++)
	{
		if (number % x == 0)
		{
			mx = number / x;
		}
	}

	printf("%ld\n", mx);

	return (0);
}
