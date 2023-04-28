#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * don't print 2 or 4.
 * Return: no return.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}
