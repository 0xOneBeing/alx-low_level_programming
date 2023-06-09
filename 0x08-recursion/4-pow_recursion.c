#include <stdio.h>

/**
 * _pow_recursion - returns recursively value of x^y
 * @x: the number value
 * @y: the power value
 * Return: the value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/** Code by 0xOneBeing */
