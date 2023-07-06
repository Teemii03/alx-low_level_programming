#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Return thr value of x raised to the power of y
 * @x: The base value
 * @y: The power value
 * Return: the base value multiplied by the power value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y = 1));
}
