#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the argument
 * @ac: Argument count
 * @av: Argument vector
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int c = 0, n = 0, m = 0, o = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (n < ac)
	{
		while (av[n][m])
		{
			c++;
			m++;
		}

		m = 0;
		n++;
	}

	a = malloc((sizeof(char) * c) + ac + 1);

	n = 0;
	while (av[n])
	{
		while (av[n][m])
		{
			a[o] = av[n][m];
			o++;
			m++;
		}

		a[o] = '\n';

		m = 0;
		o++;
		n++;
	}

	o++;
	a[o] = '\0';
	return (a);
}
