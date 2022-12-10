#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of float: %ld bytes\n", sizeof(float));
	printf("Size of double: %ld bytes\n", sizeof(double));
	printf("Size of char: %ld byte\n", sizeof(char));
	return (0);
}
