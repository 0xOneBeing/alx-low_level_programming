#include <stdio.h>

/**
 * main - start
 * Description: Print fibonaccu series starting from 1
 * Return: (0) - safe exit
 */

int main(void)
{
	int sum = 0, num1 = 1, num2 = 1, second = 1;

	while (num2 < 4000000)
	{
		second = num1 + num2;
		num1 = num2;
		num2 = second;
		if ((second <= 4000000) && (second % 2 == 0))
		{
			sum += second;
		}
	}
	printf("%d\n", sum);
	return (0);
}
