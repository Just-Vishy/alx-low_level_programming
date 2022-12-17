#include "main.h"

/**
 * times_table - Entry point;
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + 48);
			}
			else
			{
				_putchar(z + 48);
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
