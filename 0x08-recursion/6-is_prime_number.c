#include <stdio.h>
#include "main.h"

int is_prime_recursive(int n, int i);

/**
 * is_prime_number - is the number a prime number?
 * @n: the number to check
 * Return: (0) or (1)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - checks for divisibility
 * @n: the number to check
 * @i: the divisor
 * Return: the dividend
 */

int is_prime_recursive(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);
	return (is_prime_recursive(n, i + 1));
}
/** Code by 0xOneBeing */
