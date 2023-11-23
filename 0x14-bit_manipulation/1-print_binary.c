#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int flag = 0;

	while (bits--)
	{
		if ((n >> bits) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || bits == 0)
		{
			_putchar('0');
		}
	}
}
