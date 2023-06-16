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
	void *ptr;
	unsigned int total_size = (nmemb * size), i;
	unsigned char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = (unsigned char *) ptr;

	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
