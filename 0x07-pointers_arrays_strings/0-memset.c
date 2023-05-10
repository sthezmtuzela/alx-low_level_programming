#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: memory area pointer
  * @b: constant byte to fill
  * @n: memory area to fill
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
