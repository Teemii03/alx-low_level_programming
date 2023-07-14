#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to memory
 * @old_size: Size of the allocated space for ptr
 * @new_size: Size of the new memory block
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *aptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		aptr = malloc(new_size);

		if (aptr == NULL)
			return (NULL);

		return (aptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	aptr = malloc(new_size);

	if (aptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		aptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (aptr);
}
