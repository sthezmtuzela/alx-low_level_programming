#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		if (alphabets[i] != 'q' || alphabets[i] != 'e' )
		{
			putchar(alphabets[i]);
		}
	}
	putchar('\n');
	return (0);
}
