#include "main.h"
/**
 * print_array - Print n element of an array of integers
 * @a: Array of integers
 * @n: Number of the element of the array to be printed
 * Return:
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}