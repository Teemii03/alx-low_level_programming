#include "main.h"

/**
 * _strncpy - A funtion that copies a string
 * from string src into dest.
 * @dest: Buffer storing the string copy.
 * @src: Source string.
 * @n: Number of bytes to be copied from src.
 * Return: A pointer to the result of the string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, sl = 0;

	while (src[index++])
		sl++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = sl; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
