#include "main.h"
/**
 * sqrt_recursive - Calculates the square root of a number recursively.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n does not have a natural squre root.
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_recursive(n, guess + 1));
}
