/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
#include <stdio.h>
#include "holberton.h"
void print_remaining_days(int month, int day, int year)
{
	int past;
	int i;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		for (i = 1; i < month; i++)
		{
			if (i == 2)
				past += 29;
			else if (i < 8 && i % 2 == 1)
				past += 31;
			else if (i < 7)
				past += 30;
			else if (i % 2 == 0)
				past += 31;
			else
				past += 30;
		}
		past += day;
		printf("Day of the year: %d\n", past);
		printf("Remaining days: %d\n", 366 - past);
	}
	else
	{
		for (i = 1; i < month; i++)
		{
			if (i == 2)
				past += 28;
			else if (i < 8 && i % 2 == 1)
				past += 31;
			else if (i < 7)
				past += 30;
			else if (i % 2 == 0)
				past += 31;
			else
				past += 30;
		}
		past += day;
		printf("Day of the year: %d\n", past);
		printf("Remaining days: %d\n", 365 - past);
	}
}

