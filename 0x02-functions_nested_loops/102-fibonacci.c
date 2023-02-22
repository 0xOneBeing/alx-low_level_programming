#include <stdio.h>

/**
 * main - start
 * Description: Prints fibonacci series starting from 1.
 * Return: (0) - safe exit
 */

int main(void)
{
	long num1 = 1, num2 = 2;
	int i;

	for (i = 0; i < 25; i++)
	{
		if (i == 24)
		{
			printf("%li, %li", num1, num2);
			continue;
		}
		printf("%li, %li, ", num1, num2);
		num1 += num2;
		num2 += num1;
	}
	printf("\n");
	return (0);
}
