#include<stdio.h>
/**
 * main  - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	prinf("Size of a char: %d byte(s)\n", sizeof(char));
	prinf("Size of a int: %d byte(s)\n", sizeof(int));
	prinf("Size of a long: %d byte(s)\n", sizeof(long int));
	prinf("Size of a long long: %d byte(s)\n", sizeof(long long int));
	prinf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
