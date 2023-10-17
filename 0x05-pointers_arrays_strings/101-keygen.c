#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Generate a random valid password for 101-crackme program
 * Return: Always 0
 */
int main(void)
{
	int i, sum, random;
	char password[100];

	srand(time(NULL));

	sum = 0;
	i = 0;

	while (sum < 2772)
	{
		random = rand() % (126 - 33) + 33;
		password[i++] = random;
		sum += random;
	}
	password[i - 1] -= (sum - 2772);
	password[i] = '\0';

	printf("%s", password);
	return (0);
}

