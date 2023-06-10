#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: (EXIT_SUCCESS) - safe exit
 *
 * Code by 0xOneBeing
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];

		for (j = 0; arg[j] != "\0"; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
		}
		num = atoi(arg);
		sum += num;
	}

	printf("%d\n", sum;

	return (EXIT_SUCCESS);
}
