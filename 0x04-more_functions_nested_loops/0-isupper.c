#include "main.h"
#include <ctype.h>

/**
 * _isupper - checking if the letter is uppercase
 *
 * Return: 1 if upper else 0 if not
 *
 * @c: its a letter
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
