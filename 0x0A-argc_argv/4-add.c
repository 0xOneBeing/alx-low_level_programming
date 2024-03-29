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
	int i, sum;
	int num;
	char *arg;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &arg, 10);
			if (!*arg)
				sum += num;
			else
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
		}
	}
	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}
