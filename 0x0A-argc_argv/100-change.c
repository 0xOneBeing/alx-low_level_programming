#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints min num of coins to make change for an amount
 * @argc: argument count
 * @argv: argument vector
 * Return: (EXIT_SUCCESS) - safe exit
 *
 * Code by 0xOneBeing
 */

int main(int argc, char *argv[])
{
	int min, k;
	unsigned int i;
	char *arg;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	min = strtol(argv[1], &arg, 10);
	k = 0;

	if (!*arg)
	{
		while (min > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (min >= cents[i])
				{
					k += min / cents[i];
					min = min % cents[i];
				}
			}
		}
		if (min == 1)
			k++;
	}
	else
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	printf("%d\n", k);

	return (EXIT_SUCCESS);
}
