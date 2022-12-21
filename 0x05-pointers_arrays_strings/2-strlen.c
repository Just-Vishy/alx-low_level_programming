#include "main.h"
#include <string.h>

/**
 * _strlen - counts the number of characters "s"
 *
 * @s: its a string
 *
 * Return: its the total count
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
