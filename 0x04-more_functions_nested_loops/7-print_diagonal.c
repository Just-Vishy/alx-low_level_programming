#include "main.h"

/**
 * print_diagonal - it will print a backward slash
 * @n: it is the input value
 */

void print_diagonal(int n)
{
	int o;
	int p;

	for (o = 0; o < n ; o++)
	{
		for (p = 0 ; p < o ; p++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
