#include <stdio.h>

/**
 * main - start point
 * Description: Program that prints all possible combo of 3-dogots
 * Return: (0) safe exit
 */

int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	for (k = '0'; k <= '9'; k++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (!((i == j) || (k == j) || (j > i) || (k > j)))
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (!(i == '9' && k == '7' && tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
