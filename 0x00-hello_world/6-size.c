#include <stdio.h>
/**
 * main - A program that print size of various types of computer
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int b;
	float f;

printf("size of char: %lu byte(s)\n", sizeof(c));
printf("size of int: %lu byte(s)\n", sizeof(i));
printf("size of long int: %lu byte(s)\n", sizeof(l));
printf("size of long long int: %lu byte(s)\n", sizeof(b));
printf("size of float: %lu byte(s)\n", sizeof(f));
return (0);
}
