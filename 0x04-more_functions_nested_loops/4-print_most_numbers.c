#include "main.h"

/**
 * print_most_numbers - prints nunbers 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int nums;

	for (nums = 48 ; nums < 58 ; nums++)
	{
		if (nums != 50 && nums != 52)
		{
			_putchar(nums);
		}
	}
	_putchar('\n');
}
