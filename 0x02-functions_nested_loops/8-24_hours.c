#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours <= 23)
	{
		int min = 0;

		while (min <= 59)
		{
			if (hours >= 0 && hours <= 9)
			{
				putchar('0');
				putchar(hours);
				putchar(':');
				putchar(min);
			}
			else
			{
				putchar(hours);
				putchar(':');
				putchar(min);
			}
			min++;
			putchar('\n');
		}
		hours++;
		putchar('\n');
	}
}
