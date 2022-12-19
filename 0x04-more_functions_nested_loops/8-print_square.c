#include "main.h"

/**
 * print_square - it prints the square of the number using #
 * @size: it is the square input number
 */

void print_square(int size)
{
	int newline;
	int repeat;

	newline = 0;
	while (newline < size)
	{
		repeat = 0;
		while (repeat < size)
		{
			_putchar(35);
			repeat++;
		}
		_putchar('\n');
		newline++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
