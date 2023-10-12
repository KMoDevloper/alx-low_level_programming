#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: Number of times the character '\' should be printed.
 */

void print_diagonal(int n)
{
	int i, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
