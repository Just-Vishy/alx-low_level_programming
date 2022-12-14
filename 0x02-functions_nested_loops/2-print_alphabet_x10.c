#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * _putchar - Prints a character
 */

void print_alphabet_x10(void)
{
	int alpha;
	int rows;

	for (rows = '0' ; rows <= '9' ; rows++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
