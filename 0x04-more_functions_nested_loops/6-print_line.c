#include "main.h"

/**
 * print_line - prints an underscore
 *
 * @n: its value on how many times to print an underscore
 */

void print_line(int n)
{
	int nums;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (nums = 0 ; nums < n ; nums++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
