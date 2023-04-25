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

	for (hours = 0; hours <= 23; hours++)
	{
		int min = 0;

		while (min <= 59)
		{
			if (hours >= 0 && hours <= 9)
			{
				printf("0%d:%d\n",hours, min);
				/**putchar(hours);
				//putchar(':');
				//putchar(min);*/
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
		putchar('\n');
	}
}
