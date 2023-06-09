#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks whether a number is a prime number or not
 * @n: the number to check if it's a prime number
 * Return: confirmation of prime or not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
