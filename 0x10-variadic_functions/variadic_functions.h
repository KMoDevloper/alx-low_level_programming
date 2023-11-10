#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct print_format - Struct to hold a format
 * specifier and its corresponding printer function
 * @format: The format specifier (e.g., "c", "i", "f", "s")
 * @printer: Pointer to the corresponding printer function
 */
typedef struct print_format
{
	char *format;
	void (*printer)(va_list);
} print_format_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);


#endif
