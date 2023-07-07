#include <stdio.h>
#include "math.h"

/**
 * main - Prime factor
 * Return: 0
 */

int main(void)
{
	long a, max;
	long n = 612852475143;
	double s = sqrt(n);

	for (a = 1; a <= s; a++)
	{
		if (n % a == 0)
		{
			max = n / a;
		}
	}
	printf("%ld\n", max);
	return (0);
}
