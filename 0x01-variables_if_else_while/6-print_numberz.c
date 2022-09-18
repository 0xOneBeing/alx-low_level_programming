#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program returns single numbers from 0 - 10 on a new line
 * Return: return 0 if successful
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	putchar("\n");
	return (0);
}
