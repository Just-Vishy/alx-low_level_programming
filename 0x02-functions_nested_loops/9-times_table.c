#include "main.h"

/**
 * times_table - Entry point;
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int times;
	int nums;
	int combined;

	while (times < 10)
	{
		nums = 0;
		while (nums < 10)
		{
			combined = times * nums;

			if (combined > 9)
			{
				_putchar(combined / 10 + '0');
				_putchar(combined % 10 + '0');
			}
			else if (nums != 0
