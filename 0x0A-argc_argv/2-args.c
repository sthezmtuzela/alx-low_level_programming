#include "main.h"
#include <stdio.h>

/**
  * main - Prints all arguments it receives
  * @argc: argument count
  * @argv: argument value
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;

	(void) argv;
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
