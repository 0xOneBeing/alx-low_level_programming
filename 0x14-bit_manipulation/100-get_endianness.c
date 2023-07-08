#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 or 1
 *
 * Code by 0xOneBeing
 */

int get_endianness(void)
{
	unsigned int endy;
	char *c;

	endy = 1;
	c = (char *) &endy;

	return ((int)*c);
}
