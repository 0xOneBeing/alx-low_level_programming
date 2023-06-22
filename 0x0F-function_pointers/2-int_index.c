#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - finds an integerr in an integer array
 * @array: the integer array
 * @size: size of the array
 * @cmp: pointer to the fxn to be used for comparison
 * Return: -1 or match index
 *
 * COde by 0xOneBeing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
