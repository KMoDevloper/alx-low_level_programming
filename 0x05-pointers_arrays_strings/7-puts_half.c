#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int i, start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
