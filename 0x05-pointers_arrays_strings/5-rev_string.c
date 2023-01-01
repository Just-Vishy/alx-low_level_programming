#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
