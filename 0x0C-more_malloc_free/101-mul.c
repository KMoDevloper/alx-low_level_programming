#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	if (!is_positive_number(num1) || !is_positive_number(num2))
	{
		printf("Error\n");
		return (98);
	}

	char *result = multiply(num1, num2);

	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}

/**
 * is_positive_number - checks if a string represents a positive number
 * @str: input string
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two positive numbers represented as strings
 * @num1: first number
 * @num2: second number
 * Return: pointer to the result string, NULL on failure
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len3 = len1 + len2;
	char *result = malloc(len3 + 1);

	if (result == NULL)
		return (NULL);

	int *res = calloc(len3, sizeof(int));

	if (res == NULL)
	{
		free(result);
		return (NULL);
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';

		for (int j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + res[i + j + 1] + carry;

			carry = sum / 10;
			res[i + j + 1] = sum % 10;
		}

		res[i] += carry;
	}

	int pos = 0;

	while (pos < len3 && res[pos] == 0)
		pos++;

	if (pos == len3)
		result[0] = '0';
	else
	{
		for (int i = 0; i < len3 - pos; i++)
			result[i] = res[pos + i] + '0';
	}

	result[len3 - pos] = '\0';
	free(res);

	return (result);
}
