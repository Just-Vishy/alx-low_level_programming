#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - its going to add or subtract numbers until its "98"
 *
 * @n: value of the number
 */

void print_to_98(int n)
{
	if (n <= 98)
		{
			while (n <= 98)
			{
				if (n != 98)
				{
					printf("%d, ", n);
				}
				else
				{
					printf("%d\n", n);
				}
				n++;
			}
		}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n--;
		}
	}
}
