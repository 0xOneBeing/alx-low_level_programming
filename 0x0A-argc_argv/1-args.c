#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints number of arguments passed into program
 * @argc: argument count
 * @argv: argument vector
 * Return: (EXIT_SUCCESS) - safe exit
 *
 * Code by 0xOneBeing
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);

	return (EXIT_SUCCESS);
}
