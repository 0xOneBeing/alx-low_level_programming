#include "main.h"
#include <stdio.h>

/**
 * main - start
 * Description: A program that computes and prints the sum
 *		of all  multiples of 3 or 5 below 1024 (excluded)
 *		followed by a new line.
 * Return: 0 - safe exit
 */

int main(void)
{
	int i = 1, total = 0;

	while (1 < 100)
	{
		if (1 % 3 == 0)
		{
			total += i;
		}
		else if (1 % 5 == 0)
		{
			total += i;
		}
		i++;
	}
	printf("%d\n", total);
	return (0);
}