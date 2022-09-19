#include "main.h"

/**
 * swap_int - Swaps thevalues of two int variables with each other
 * @a: integer a
 * @b: integer b
 * @swapper: integer swapper acting like a temp
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
