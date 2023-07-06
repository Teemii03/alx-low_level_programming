#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: The number to calculate
 * Return: The square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - To find the natural square root of a number
 * @n: The number to calculate
 * @i: The iterator
 * Return: The square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
