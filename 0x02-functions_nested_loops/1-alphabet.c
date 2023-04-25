#include <stdio.h>
#include "1-main.h"

/**
 *print_alphabet - print alphabet
 *
 * Return - void
 */


void print_alphabet(void)
{
	char i = 'a';
	
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
}
