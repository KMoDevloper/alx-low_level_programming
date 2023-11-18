#include <stdio.h>

void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Prints a message before the main function.
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you nust allow,\n"
		"I bore my house upon my back!\n");
}
