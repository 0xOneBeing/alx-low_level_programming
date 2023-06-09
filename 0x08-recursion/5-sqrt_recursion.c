#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - return natiral sqyare root of a number
 * @n: the number to be squared
 * Return: the squared number
 */

int _sqrt_recursion(int n)
{
	while (n > 0)
		return (n * _sqrt_recursion(n - 1));
}
