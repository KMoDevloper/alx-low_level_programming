#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string using malloc
 * @str: input string
 *
 * Return: pointer to newly allocated space containing the duplicated string,
 * or NULL if memory alllocation fails or if str is NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate  == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
