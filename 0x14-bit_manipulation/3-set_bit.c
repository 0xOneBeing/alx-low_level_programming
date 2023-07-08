#include "main.h"

/**
 * set_bit - Sets the vakue of a bit to 1
 * @n: The pointer of an unsigned long int
 * @index: Index of the bit
 * Return: 1 or -1
 *
 * Code by 0xOneBeing
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int _m;

	if (index > 63)
		return (-1);

	_m = 1 << index;
	*n = (*n | _m);

	return (1);
}
