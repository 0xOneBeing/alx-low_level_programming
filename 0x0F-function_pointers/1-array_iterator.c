#include "function_pointers.h"

/**
 * array_iterator - iteratively executes a fxn given as a parameter
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the fxn to be executed
 *
 * Code by 0xOneBeing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
