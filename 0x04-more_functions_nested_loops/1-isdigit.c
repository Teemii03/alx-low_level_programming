#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The digit to be checked
 * Return: 1 if c is digiy and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
