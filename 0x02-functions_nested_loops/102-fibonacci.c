#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2, nextTerm;

	printf("%ld, %ld", fib1, fib2);

	for (i = 3; i <= 50; ++i)
	{
		nextTerm = fib1 + fib2;
		printf(", %ld", nextTerm);
		fib1 = fib2;
		fib2 = nextTerm;
	}
	printf("\n");

	return (0);
}
