#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to be 'factorializes'
 * Return: the factorial
 */

int factorial(int n)
{
	if ((n == 0) || (n == 1))
		return (1);
	return (n * factorial(n - 1));
}
/** Code by 0xOneBeing */
