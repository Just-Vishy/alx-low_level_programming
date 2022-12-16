#include "main.h"

/**
 * more_numbers - prints 0 to 14 ,10 times
 */

void more_numbers(void)
{
	int repeat;
	int alpha;

	for (repeat = 48 ; repeat < 58 ; repeat++)
	{
		for (alpha = 0 ; alpha < 15 ; alpha++)
		{
			if (alpha > 9)
			{
			_putchar((alpha / 10) + 48);
			}
			_putchar((alpha % 10) + 48);
		}
		_putchar('\n');
	}
}
