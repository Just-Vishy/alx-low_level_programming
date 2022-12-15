#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Sucess)
 */

void jack_bauer(void)
{
	int minutes;
	int hours;

	for (hours = 0 ; hours < 24 ; hours++)
	{
		for (minutes = 0 ; minutes < 60 ; minutes++)
		{
			_putchar(hours / 10 + 48);
			_putchar(hours % 10 + 48);
			_putchar(58);
			_putchar(minutes / 10 + 48);
			_putchar(minutes % 10 + 48);
			_putchar('\n');
		}
	}
}
