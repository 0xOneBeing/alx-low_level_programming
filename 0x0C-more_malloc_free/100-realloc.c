#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a block of memory using malloc and free
 * @ptr: pointer to the block of memry
 * @old_size: the old size of the memory block
 * @new_size: the new size of the memory block
 * Return: pointer to newly allocated memory block or null
 *
 * Code by 0xOneBeing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pntr;
	unsigned int i;

	if (ptr == NULL)
	{
		pntr = malloc(new_size);
		return (pntr);
	}
	else if (new_size == 0)
	{
		free(pntr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	pntr = malloc(new_size);

	if (pntr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		pntr[i] = ptr[i];

	free(ptr);

	return (pntr);
}

