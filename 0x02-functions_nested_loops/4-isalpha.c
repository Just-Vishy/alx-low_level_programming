#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * _putchar - print the character
 *
 * @c: is a character
 *
 * Return: 1 if it is uppercase or lowercase otherwise not
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
