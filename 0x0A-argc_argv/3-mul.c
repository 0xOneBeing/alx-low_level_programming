#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers together
 * @argc: argument count
 * @argv: argument vector
 * Return: (EXIT_SUCCESS) - safe exit
 *
 * Code by 0xOneBeing
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	(void) argc;

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (EXIT_SUCCESS);
}
