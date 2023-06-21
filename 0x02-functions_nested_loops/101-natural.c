#include <stdio.h>
/**
 * main - Print the sum of all the multiple of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int x, z = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			z += x;
		}
		x++;
	}
	printf("%d\n", z);
	return (0);
}
