#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num[10] = "0123456789";

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
