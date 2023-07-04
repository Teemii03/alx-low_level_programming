#include "main.h"

/**
 * print_chessboard - Function that prints a chessboard
 * @a: Array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int n, m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[n][m]);
		_putchar('\n');
	}
}
