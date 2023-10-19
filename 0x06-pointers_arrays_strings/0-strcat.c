#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, 1;

	while (dest[dlen])
	{
		dlen++;
	}

	while (src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}

	dest[dlen + i] = '\0';

	return (dest);
}
