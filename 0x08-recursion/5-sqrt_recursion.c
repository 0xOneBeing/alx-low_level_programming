#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int sqrt_recursion(int num, int i);

/**
 * _sqrt_recursion - return natiral sqyare root of a number
 * @n: the number to be squared
 * Return: the squared number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	return (sqrt_recursion(n, 2));
}

/**
 * sqrt_recursion - recursively clculate the squareroot of a number
 * @num: the number to be squared
 * @i: loop iterator
 * Return: the squared number
 */

int sqrt_recursion(int num, int i)
{
	if (i % (num / i) == 0)
	{
		if (i * (num / i) == num)
			return (i);
		else
			return (-1);
	}
	return (0 + sqrt_recursion(num, i + 1));
}

/** Code by 0xOneBeing */
