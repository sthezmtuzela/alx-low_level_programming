#include "main.h"

/**
 * _strncpy - copies a strong
 * @dest: destination string
 * @src: source string
 * @n: the limit for copy
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
