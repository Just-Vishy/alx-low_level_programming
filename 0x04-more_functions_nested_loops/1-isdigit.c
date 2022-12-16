#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for the digit
 *
 * @c: digit or number
 *
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
