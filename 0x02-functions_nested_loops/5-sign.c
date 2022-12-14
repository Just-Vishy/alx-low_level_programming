#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: Number
 *
 * _putchar - prints out the value
 *
 * Return: 1 is for > 0 , 0 is for = 0 and -1 is for < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
