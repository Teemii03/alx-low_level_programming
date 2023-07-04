#include "main.h"

/**
 * _strcmp - A funtion that compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: if str1 < str2, the differences of the first unmatched chars
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the first unmatched chars.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
