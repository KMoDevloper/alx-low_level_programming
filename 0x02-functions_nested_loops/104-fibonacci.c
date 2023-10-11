#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long long fib1 = 1, fib2 = 2, nextTerm;
	int count = 0;

	printf("%llu, %llu", fib1, fib2);
	count = 2;

	while (count < 98)
	{
		nextTerm = fib1 + fib2;
		printf(", %llu", nextTerm);
		fib1 = fib2;
		fib2 = nextTerm;
		count++;

		if (count % 10 == 0)
		{
			printf("\n");
		}
	}

	printf("\n");

	return (0);
}
