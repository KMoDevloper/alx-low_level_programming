#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 1 if there are non-digit characters, 0 if no arguments
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
