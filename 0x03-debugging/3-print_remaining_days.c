#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Print how many days are left in the year
 * taking leap year into account
 * @month: Month in numerical format
 * @day: Day of the month
 * @year: Year
 * Return:
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
		printf("Invalid date: %02d/%2d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
