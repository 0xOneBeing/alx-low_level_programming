#include <stdlib.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second ninteger
 * Return: result of (a + b)
 *
 * Code by 0xOneBeing
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtraction of two integers
 * @a: first integer
 * @b: second integer
 * Return: result of (a - b)
 *
 * Code by 0xOneBeing
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of two integers
 * @a: first integer
 * @b: second integer
 * Return: result of (a * b);
 *
 * Code by 0xOneBeing
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two integers
 * @a: first integer
 * @b: second integeer
 * Return: result of (a / b)
 *
 * Code by 0xOneBeing
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of two integers after division
 * @a: first integer
 * @b: second integer
 * Return: result of (a % b)
 *
 * Code by 0xOneBeing
 */
int op_mod(int a, int b)
{
	return (a % b);
}
