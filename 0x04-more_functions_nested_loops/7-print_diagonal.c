#include "main.h"

/**
 * print_diagonal - it will print a backward slash
 * @n: it is the input value
 */

void print_diagonal(int n)
{
	int space;
	int backslash_newline;

	backslash_newline = 0;
	while (backslash_newline < n)
	{
		space = 0;
		while (space < backslash_newline)
		{
			_putchar(' ');
			space++;
		}
		_putchar(92);
		_putchar('\n');
		backslash_newline++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
