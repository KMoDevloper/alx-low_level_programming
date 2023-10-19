#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int i;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen + i] = src[i];

	}

	dest[dlen + i] = '\0';

	return (dest);
}
