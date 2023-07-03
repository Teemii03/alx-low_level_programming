#include "main.h"

/**
 * _memcpy - A funtion that copies memory area
 * @dest: Destination
 * @src: Source
 * @n: Bytes
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
