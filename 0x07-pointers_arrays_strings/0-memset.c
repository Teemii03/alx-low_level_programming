#include "main.h"

/**
 * _memset - Function that fills memory with constant bytes
 * @s: Pointed destination
 * @b: Constant bytes
 * @n: bytes
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
