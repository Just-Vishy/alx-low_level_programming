#include "main.h"

/**
 * _abs - Entry point
 *
 * Return: Always 0 (Success)
 *
 * @r: its a value
 *
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}
	return (0);
}
