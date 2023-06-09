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
	else
	{
		inr start = 2;
		int end = n / 2;
		int mid = (start + end) / 2;
		int square = mid * mid;

		if (square == n)
			return mid;
		else if (sqyare > n)
			return _sqrt_recursion(start, mid = 1);
		else
			return _sqrt_recursion(mid + 1, end);
	}
}
/** Code by 0xOneBeing */
