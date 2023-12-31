#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array
 * @n: Number of element in array
 * Return:
 */

void reverse_array(int *a, int n)
{
	int t, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
