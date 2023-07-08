#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: Binary to be converted
 * Return: The unsigned integer
 *
 * Code by 0xOneBeing
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int binary, length;

	i = 0;

	if (!b)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, binary = 1; length >= 0; length--, binary *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (EXIT_SUCCESS);
		}

		if (b[length] & 1)
			i += binary;
	}
	return (i);
}
