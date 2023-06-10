#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints all arguments passed into program
 * @argc: argument count
 * @argv: argument vector
 * Return: (EXIT_SUCCESS) - safe exit
 *
 * Code by 0xOneBeing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (EXIT_SUCCESS);
}
