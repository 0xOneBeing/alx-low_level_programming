#include <stdio.h>

/**
 * main - start
 * Description: Prints largest prime factor of a specified number.
 * Return: (0) - safe exit
 */

int main(void)
{
	long long num = 612852475143;
	long long factor = 2;
	long long largest = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			largest = factor;
			while (num % factor == 0)
			{
				num /= factor;
			}
		}
		factor++;
	}
	printf("%lld\n", largest);
	return (0);
}
