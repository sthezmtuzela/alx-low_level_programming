#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: the limit for concat
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0; 
	int i = 0;

	while (dest[destlen])
	{
		destlen++;
	}

	while (i < n && src[i])
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}

	dest[destlen + n + 1] = '\0';

	return (dest);
}
