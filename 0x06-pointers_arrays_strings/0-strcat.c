#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int dl = 0, i;

	while (dest[dl])
	{
		dl++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dl] = src[i];
		dl++;
	}

	dest[dl] = '\0';
	return (dest);
}
