#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Pointer to a 2 dimensional array
 * @width: The column of the array
 * @hieght: The row of the array
 * Return: A pointer to the integers
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **i;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
	{
		free(i);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		i[a]= malloc(sizeof(int) * width);

		if(i[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(i[b]);
			}

			free(i);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			i[c][d] = 0;
		}
	}

	return (i);
}
