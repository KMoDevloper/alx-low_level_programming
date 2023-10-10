#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;
	char hexDigit;

	while (digit < 16)
	{
		if (digit < 10)
	{
		hexDigit = digit + '0';
	}
		else
	{
		hexDigit = digit - 10 + 'a';
	}
		putchar(hexDigit);
		digit++;
	}

	putchar('\n');
	return (0);
}
