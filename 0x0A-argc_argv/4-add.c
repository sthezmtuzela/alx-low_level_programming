#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds  positive numbers
  * @argc: argument count
  * @argv: argument value
  *
  * Return: Always zero
  */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(argv[i][0] >= '0' && argv[i][0] <= '9')
		    && argv[i][0] != '-')
		{
			printf("Error\n");
			return (1);
		}
		for (j = 1; argv[i][j] != 0; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);

	return (0);
}
