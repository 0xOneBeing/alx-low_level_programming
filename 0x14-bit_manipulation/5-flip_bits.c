#include "main.h"

/**
 * flip_bits - Returns the no of bits needed to flip from one to another
 * @n: num1
 * @m: num2
 * Return: Number of bits
 *
 * Code by 0xOneBeing
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits;

	for (n_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			n_bits++;
	}
	return (n_bits);
}
