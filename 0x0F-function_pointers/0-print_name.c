#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the provided function pointer
 * @name: name of the person
 * @f: function pointer to a function that prints a string
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
