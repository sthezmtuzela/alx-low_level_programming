#include <stdio.h>
#include "main.h"

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
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
