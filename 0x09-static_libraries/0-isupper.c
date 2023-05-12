#include "main.h"
/**
 * _isupper - checks if parameter is an uppercase.
 * @c: input character.
 * Return: 1 if is an uppercase, 0 if it is a lowercase.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
