#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 'a' + 'A';
	}

	while (str[i] != '\0')
	{
		if (is_separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 'a' + 'A';
		}
		i++;
	}

	return (str);
}
