#include "main.h"

/**
 * _isupper - Check for upper case character
 * @c:The character to be checked
 * Return: 1 for upper case and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
