#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 */

void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == '9')
		{
			_putchar(digit);
			_putchar('\n');
		}
		else
		{
			_putchar(digit);
		}
	}
}
