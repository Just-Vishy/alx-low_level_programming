#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * print_rev - prints in reverse
 *
 * @s: it is a character.
 */

void print_rev(char *s)
{
	size_t len = strlen(s);
	size_t i;

	i = len;
	while (i > 0)
	{
		_putchar(s[i-1]);
		i--;
	}
	_putchar('\n');
}
