#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The times table to print (0 <= n <= 15)
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, result;
		char digit;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j != 0)
					_putchar(',');

				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					digit = result + '0';
					_putchar(digit);
				}
				else if (result < 100)
				{
					_putchar(' ');
					digit = (result / 10) + '0';
					_putchar(digit);
					digit = (result % 10) + '0';
					_putchar(digit);
				}
				else
				{
					digit = (result / 100) + '0';
					_putchar(digit);
					digit = ((result / 10) % 10) + '0';
					_putchar(digit);
					digit = (result % 10) + '0';
					_putchar(digit);
				}
			}
			_putchar('\n');
		}
	}
}
