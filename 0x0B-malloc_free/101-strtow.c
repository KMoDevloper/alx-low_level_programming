#include <stdlib.h>
#include "main.h"

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

	word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

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

			words[k] = malloc((len + 1) * sizeof(char));

			if (words[k] == NULL)
			{
				for (k = k - 1; k >= 0; k--)
					free(words[k]);
				free(words);
				return (NULL);
			}

			for (j = 0; j < len; j++, i++)
				words[k][j] = str[i];
			words[k][j] = '\0';
			k++;
		}
	}

	words[word_count] = NULL;
	return (words);
}
