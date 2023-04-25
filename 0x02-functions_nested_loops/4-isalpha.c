#include <stdio.h>
#include "main.h"

/**
  * _isalpha - Checks if 'c' is an alphabetic character
  *@c - value to check
  *
  * Return: 1 for alphabetic character or 0 if not alphabetic
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}

