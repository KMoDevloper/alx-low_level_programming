#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - checks if a string is palindrome recursively.
 * @s: The string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if the stribng is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (is_palindrome_recursive(s, start + 1, end - 1));
	return (0);
}
/**
 * is_palindrome - checks is a string a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
