#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: 0.
 */

void print_numbers(void)
{
	int nums = 48;

	while (nums < 58)
	{
		_putchar(nums);
		nums++;
	}

	_putchar('\n');
}
