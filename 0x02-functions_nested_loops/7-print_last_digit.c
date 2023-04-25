#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @i: value to be checked
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int i)
{
	int l;

	l = i % 10;

	if (l < 0)
	{
		l = l * -1;
	}

	_putchar(l + '0');

	return (l);
}
