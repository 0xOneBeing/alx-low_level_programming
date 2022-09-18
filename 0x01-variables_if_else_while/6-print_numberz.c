#include <stdio.h>

/**
 * main - This program prints from 0 to 9 using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
