#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - return natiral sqyare root of a number
 * @n: the number to be squared
 * Return: the squared number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);

	int guess; 
	guess = _sqrt_recursion(n - 1);

	if (guess * guess <= n && (guess + 1) * (guess + 1) > n)
		return (guess);
	else
		return (_sqrt_recursion(n - 1));
}
/** Code by 0xOneBeing */
