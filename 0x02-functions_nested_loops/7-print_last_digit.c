#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @r: its a value
 * Return: Always 0 (Success)
 */

int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
	{
		last_digit = (r % 10) * -1;
		_putchar(last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = r % 10;
		_putchar(last_digit);
		return (last_digit);
	}
	return (0);
}
