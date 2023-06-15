#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: null or pointer to the array of integers
 *
 * Code by 0xOneBeing
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));

	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = (int *) malloc(width * sizeof(int));
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i++;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
