#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */

void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (start = 0, end = length - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
