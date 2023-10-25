#include "main.h"
/**
 * is_prime_recursive - checks if a number is prime recursively.
 * @n: The number to check.
 * @i: The divisor.
 *
 * Return: i if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
