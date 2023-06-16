#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory and terminates the process
 * @b: memory allocated
 * Return: pointer to allocated memory
 *
 * Code by 0xOneBeing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
