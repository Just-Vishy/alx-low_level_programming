#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * @i: its a value
 *
 * Return: Always 0.
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
