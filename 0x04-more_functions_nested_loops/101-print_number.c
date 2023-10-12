#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int reversedNumber = 0;
	int originalNumber = n;
	while (n != 0)
	{
		reversedNumber = reversedNumber * 10 + n % 10;
		n /= 10;
	}

	while (reversedNumber != 0)
	{
		_putchar(reversedNumber % 10 + '0');
		reversedNumber /= 10;
	}
}
