#include <stdlib.h>
#include "main.h"

/**
 * _calloc - implementtation of the 'calloc' function
 * @nmemb: number of elements in array
 * @size: size of elements
 * Return: pointer or null
 *
 * Code by 0xOneBeing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size = (nmemb * size), i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
