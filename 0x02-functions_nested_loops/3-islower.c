#include "main.h"

/**
 * _islower - return 1 if the input is a
 * lowercae else return 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase or 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
