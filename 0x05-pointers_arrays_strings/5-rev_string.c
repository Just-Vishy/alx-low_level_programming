#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * rev_string - it reverses the string
 *
 * @s: it is the string character
 */

void rev_string(char *s)
{
	size_t len = strlen(s);
	size_t x;

	x = len;
	while (x > 0)
	{
		_putchar(s[x - 1]);
		x--;
	}
	_putchar('\n');
}
