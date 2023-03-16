#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - fxn that allocates memory using malloc
 * @b: Variable to satisfy sizeof_t
 * Return: ptr, pointer to the allocated memory block
 */

void *malloc_checked(unsigned int b)
{
        void *ptr = malloc(b);

        if (ptr == NULL)
        {
                exit(98);
        }

        return (ptr);
}
