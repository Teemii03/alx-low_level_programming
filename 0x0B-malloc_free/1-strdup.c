#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A pointer to a newly allocated space in memory
 * @str: The string given
 *
 * Return: The copied string
 */

char *_strdup(char *str)
{
	int y = 0, z = 1;
	char *a;

	if (str == NULL)
		return (NULL);

	while (str[z])
	{
		z++;
	}

	a = malloc((sizeof(char) * z) + 1);

	if (a == NULL)
		return (NULL);

	while (y < z)
	{
		a[y] = str[y];
		y++;
	}

	a[y] = '\0';
	return (a);
}
