#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - multiplies two positive numbers represented as strings
 * @num1: first number
 * @num2: second number
 * Return: pointer to the result string, NULL on failure
 */
char *multiply(char *num1, char *num2)
{
	if (num1 == NULL || num2 == NULL || !is_positive_number(num1) || !is_positive_number(num2))
	{
		return (NULL);
	}

	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len3 = len1 + len2;
	char *result = malloc(len3 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

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
