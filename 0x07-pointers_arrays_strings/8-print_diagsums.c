#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int y, z, s1 = 0, s2 = 0;

	for (y = 0; y <= (size * size); y = y + size + 1)
		s1 = s1 + a[y];

	for (z = size - 1; z <= (size * size) - size; z = z + size - 1)
		s2 = s2 + a[z];
	printf("%d, %d\n", s1, s2);
}
