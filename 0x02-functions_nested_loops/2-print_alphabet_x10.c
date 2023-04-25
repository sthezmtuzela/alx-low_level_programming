#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - print alphabet
 *
 * Return - void
 */
void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			putchar(i);
			i++;
		}

		putchar('\n');
		num++;
	}
}
