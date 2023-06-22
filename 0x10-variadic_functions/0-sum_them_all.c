#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all params passed
 * @n: the number of params passed
 * @...: variable number of params to calculate sum of
 * Return: 0 or sum of all params
 *
 * Code by 0xOneBeing
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum;

	sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
