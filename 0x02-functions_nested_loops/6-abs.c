#include <stdio.h>
#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @c: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
