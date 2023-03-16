#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - fxn that allocates memory using malloc
 * @b: Variable to satisfy sizeof_t
 * Return: ptr, pointer to the allocated memory block
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);
	return (ptr);
}
