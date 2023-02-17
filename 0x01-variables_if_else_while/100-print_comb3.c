#include <stdio.h>

/**
 * main - entry point
 * Description: Prints all possible different combinations of two digits
 * Return: (0) safe exit
 */

int main(void)
{
	int i = '0';
	int j = '0';

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + '1'; j <= '0'; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
