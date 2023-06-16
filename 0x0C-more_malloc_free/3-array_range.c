#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: lower limit of array
 * @max: upper limit of array
 * Return: array of integers
 *
 * Code by 0xOneBeing
 */

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);

	j = (max - min + 1);

	arr = malloc(j * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < j; i++, min++)
		arr[i] = min;

	return (arr);
}
