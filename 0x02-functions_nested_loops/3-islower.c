#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * @c: is the character
 *
 * _putchar - prints out characters
 *
 * Return: 1 = lowercase else 0 is not
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
