#include "main.h"

/**
 * swap_int - it swaps the value of "a" to "b"
 * @a: value 1
 * @b: value 2
 */

void swap_int(int *a, int *b)
{
	int swapa = *a;
	int swapb = *b;

	*a = swapb;
	*b = swapa;
}
