#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program returns single integer number from 0-10
 * Return: return 0 if successful
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
