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

	while (num > factor)
	{
		if (num % factor == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%lld\n", num);
	return (0);
}
