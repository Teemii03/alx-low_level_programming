#include "main.h"
#include <stdio.h>

/**
 * main - Print number of argument
 * @argc: Argument count
 * @argv: Argument vector
 * Reason:
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}