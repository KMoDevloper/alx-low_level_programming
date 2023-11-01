#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: input string
 *
 * Return: number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * _strdup - duplicates a string
 * @str: input string
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < word_count; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			words[k] = _strdup(str + i);
			if (words[k] == NULL)
			{
				for (k = k - 1; k >= 0; k--)
					free(words[k]);
				free(words);
				return (NULL);
			}

			k++;
			i = j;
		}
		else
		{
			i++;
		}
	}

	words[word_count] = NULL;
	return (words);
}
