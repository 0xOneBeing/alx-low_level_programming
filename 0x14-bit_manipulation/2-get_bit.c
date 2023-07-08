#include <stdlib.h>
#include "main.h"

/**
 * get_int - Retrns the value of a bit at given index
 * @n: Unsigned long int
 * @index:The index of the bit
 * Return: Value of the bit
 *
 * Code by 0xOneBeing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (EXIT_SUCCESS);

	for (i = 0; i <= 63; n >>=1, i++)
	{
		if (index == 1)
			return (n & 1);
	}
	return (-1);
}
