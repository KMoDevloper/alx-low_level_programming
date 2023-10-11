#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, nextTerm;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; ++count)
	{
		nextTerm = fib1 + fib2;
		printf(", %lu", nextTerm);
		fib1 = fib2;
		fib2 = nextTerm;
	}

	printf("\n");

	return (0);
}
