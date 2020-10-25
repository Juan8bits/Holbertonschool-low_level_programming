#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct dat - Structure to contains pointer-functions and pointers-strings.
 * @string: Pointer to string in the memomry location.
 * @function: pointer to function with a list argument.
 * Description: Struct that data strings with functions.
 */
typedef struct dat
{
	char *string;
	void (*function)(va_list);
} data;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void typechar(va_list arguments);
void typeinteger(va_list arguments);
void typefloat(va_list arguments);
void typestring(va_list arguments);
#endif /* VARIADIC_FUNCTIONS_H */
