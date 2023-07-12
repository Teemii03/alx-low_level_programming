#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two string
 * @s1: Fisrt string to the used
 * @s2: Second string to be used
 * Return: the two string concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	d = a + b;
	n = malloc((sizeof(char) * d) + 1);

	if (n == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			n[c] = s1[c];

		if (c >= a)
		{
			n[c] = s2[b];
			b++;
		}

		c++;
	}

	n[c] = '\0';
	return (n);
}
