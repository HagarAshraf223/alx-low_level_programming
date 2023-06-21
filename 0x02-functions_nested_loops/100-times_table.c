#include "main.h"

/**
 * print_times_table - the function that prints the n times table.
 *
 * @n: function input.
 */

void print_times_table(int n)
{
	int i, mult, prod;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar(48);
			for (mult = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');
				prod = i * mult;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
