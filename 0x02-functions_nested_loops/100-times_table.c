#include "main.h"

/**
 * print_times_table - prints time tables
 * @n: int variable for max range
 */

void print_times_table(int n)
{
	int row, col, product;

	if (n < 0 || n >= 15)
		return;
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = (row * col);
			if (col == 0)
			{
				_putchar('0' + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product > 9 && product < 199)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
			}
		}
		_putchar('\n');
	}
}
