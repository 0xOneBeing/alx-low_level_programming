#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @seperator: the seperaror string
 * @n: number of integers
 * @...: variable number of srgs
 *
 * Code by 0xOneBeing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		else
			continue;
	}

	va_end(nums);

	printf("\n");
}
