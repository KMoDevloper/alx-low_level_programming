#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long long int fib1 = 1, fib2 = 2, nextTerm;

	printf("%lld, %lld", fib1, fib2);

	for (i = 3; i <= 50; ++i)
	{
		nextTerm = fib1 + fib2;
		printf(", %lld", nextTerm);
		fib1 = fib2;
		fib2 = nextTerm;
	}
	printf("\n");

	return (0);
}
