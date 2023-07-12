#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars
 * And initialize it with a specific char
 * @size: The size of the array
 * @c: The char to be in the array
 * Return: The filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int u;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
	{
		a[u] = c;
	}

	return (a);
}
