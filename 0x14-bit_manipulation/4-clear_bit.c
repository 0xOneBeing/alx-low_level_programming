#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0
 * @n: Pointer of an unsigned lont int
 * @index: Index of the bit
 * Return: 1 or -1
 *
 * Code by 0xOneBeing
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int _m;

	if (index > 63)
		return (-1);

	_m = 1 << index;

	if (*n & _m)
		*n ^= _m;

	return (1);
}
