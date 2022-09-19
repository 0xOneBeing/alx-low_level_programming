#include "main.h"

/**
 * swap_int - Swaps thevalues of two int variables with each other
 * @a: integer a
 * @b: integer b
 * @swapper: integer swapper acting like a temp
 */

int swapper;

void swap_int(int *a, int *b)
{
	swapper = *a;
	*a = *b;
	*b = swapper;
}
